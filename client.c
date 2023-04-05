/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:51:09 by cjackows          #+#    #+#             */
/*   Updated: 2023/04/05 14:51:11 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

static int	g_message_delivered;

/*
	Function for handling signals SIGUSR1. Programmed as response from server
	indicating a successfully delivered message.
*/

static void	server_signal_handler(int signal)
{
	g_message_delivered = 1;
	if (signal == SIGUSR1)
		ft_printf("\033[0;32mMessage delivered successfully!\033[0m\n", 1);
}

/*
	Value of a char in memory is represented as 8 bits (1 byte) therfore to 
	send a char over signals we first need to convert it into binary.
	To achive that function iterates 8 times wich each repetition 
	shifting the first bit to the left going down to the least 
	significant bit (bit 0).
	
	
	The line "((c >> i) & 1)" is used to shift the binary representation
	 of the character c to the right by i positions.
	Function use SIGUSR2 (=30) to send "0" and SIGUSR1 (=31) to send "1".
	?	---= Right bit shift =---
	?	b7 b6 b5 b4 b3 b2 b1 b0
	?	0  b7 b6 b5 b4 b3 b2 b1
	
	?	---= Simple visual representation for c = 'A' | 01000001 =---
	? 	i = 7 | 0 100000  0 <- c | 0 |
	? 	i = 6 | 00 000000 1 <- c | 1 |
	? 	i = 5 | 000 00000 0 <- c | 0 |
	? 	i = 4 | 0000 0000 0 <- c | 0 |
	? 	i = 3 | 00000 000 0 <- c | 0 |
	? 	i = 2 | 000000 00 0 <- c | 0 ]
	? 	i = 1 | 0000000 0 0 <- c | 0 |
	? 	i = 0 | 00000000  1 <- c | 1 |
*/

static void	char2binary(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		printf("i = %d\n", i);
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		i--;
	}
}

/*
	Function responsible for simple PID parsing check. Exits the program on ERROR.
*/

static int	pid_check(int pid)
{
	if ((kill(pid, 0) == 0) && (pid > 0))
		ft_printf("\033[0;32mPID %d is valid. Sending the message.\n", pid);
	else
	{
		ft_printf("\033[0;31mERROR - PID %d is invalid.\033[0m\n", pid);
		exit(1);
	}
	return (pid);
}

/*
	Function at first initializes the sigation struct signal, adressing 
	signal handling to external function. Function iterates trough secound
	passed argument passing each character to external function responsible
	 for sending binary value of that char as a signal to server.c.
	String Null termination is done after the conversion. Using a global 
	variable g_message_delivered, function is able to detect errors if the
	message got interrupted.
*/

int	main(int ac, char **av)
{
	int					pid;
	int					i;
	struct sigaction	signal;

	i = 0;
	if (ac == 3)
	{
		pid = pid_check(ft_atoi(av[1]));
		signal.sa_handler = &server_signal_handler;
		if (sigaction(SIGUSR1, &signal, NULL) == -1)
			ft_printf("\033[0;31mERROR SIGUSR1\033[0m\n");
		while (av[2][i])
			char2binary(pid, av[2][i++]);
		char2binary(pid, '\0');
		if (!g_message_delivered)
			ft_printf("\033[0;31mServer didn't response :(\033[0m\n");
	}
	else
		ft_printf("\033[0;31mArgument parsing error\033[0m\n");
	return (0);
}
