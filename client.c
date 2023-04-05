/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:51:09 by cjackows          #+#    #+#             */
/*   Updated: 2023/04/05 11:59:39 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

// static int	g_message_delivered;

// static void	server_signal_handler(int n)
// {
// 	g_message_delivered = 1;
// 	if (n == SIGUSR1)
// 		ft_putstr_fd("Message delivered successfully!", 1);
// }

/*
	Value of a char in memory is represented as 8 bits (1 byte) therfore to 
	send a char over signals we first need to convert it into binary.
	To achive that function iterates 8 times wich each repetition 
	shifting the first bit to the left going down to the least 
	significant bit (bit 0).
	
	
	The line "((c >> i) & 1)" is used to shift the binary representation
	 of the character c to the right by i positions.
	Function use SIGUSR2 (=30) to send "0" and SIGUSR1 (=31) to send "1".
	
	Example for char `A`
	i = 7 | -> 01000001 | 0 | SIGUSR2
	i = 6 | -> 1000001  | 1 | SIGUSR1
	i = 5 | -> 000001   | 0 | [...]
	i = 4 | -> 00001    | 0
	i = 3 | -> 0001     | 0
	i = 2 | -> 001      | 0
	i = 1 | -> 01       | 0
	i = 0 | -> 1        | 1
	---=[ At this point the character has been send ]=---
	g_message_delivered = 0; Because now we need to wait for server to
	send a signal back indicating that the message has been recived.
*/

static void	char2binary(int pid, char c)
{
// g_message_delivered = 0;
	int	i = 7;
	while(i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		// while (!g_message_delivered)
		usleep(500);//! ?
		i--;
	}
}


int	main(int ac, char **av)
{
	int					pid;
	int					i;
	i = 0;
	struct sigaction	signal;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (kill(pid, 0) == 0)
		{
			ft_printf("PID %d is valid.\n", pid);
			ft_printf("Processing to send the message...\n");
		}
		else
		{
			ft_printf("ERROR - PID %d is invalid.\n", pid);
			return (1);
		}
		// signal.sa_flags = SA_RESTART;
		// signal.sa_handler = &server_signal_handler;
		// if (sigaction(SIGUSR1, &signal, NULL) == -1)
		// 	ft_putstr_fd("Error with SIGUSR1\n", 1);
		// if (sigaction(SIGUSR2, &signal, NULL) == -1)
		// 	ft_putstr_fd("Error with SIGUSR2\n", 1);
		while (av[2][i])
			char2binary(pid, av[2][i++]);
		char2binary(pid, '\0');
		return (0);
	}
	else
	{
		ft_printf("ERROR - Not enough arguments");
		return (1);
	}
}