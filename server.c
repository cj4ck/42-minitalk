/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:41:52 by cjackows          #+#    #+#             */
/*   Updated: 2023/04/05 11:27:52 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"
#include "libft/libft.h"

int	new_putchar(unsigned int c)
{
	write(1, &c, 1);
	return (1);
}

static void	b2c(int signal, unsigned int *c)
{
	if (signal == SIGUSR1)
	{
		printf("1\n");
		// *c = (*c << 1) | 1;
	}
	else if (signal == SIGUSR2)
	{
		printf("0\n");
		// *c = *c << 1;
	}
}

static void	client_sig(int signal, siginfo_t *info, void *context)
{
	static unsigned int		c;
	static int				i;
	static int				pid;

	(void)*context;
	if (pid == 0)
		pid = info->si_pid;
	// b2c(signal, &c);
	if (signal == SIGUSR1)
	{
		// printf("1\n");
		c = (c << 1) | 1;
	}
	else if (signal == SIGUSR2)
	{
		// printf("0\n");
		c = c << 1;
	}
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			ft_printf("\nMessage: \n");
		// kill(pid, SIGUSR1);
			return ;
		// pid = 0;
		}
		new_putchar(c);
		c = 0;
	}
	// kill(pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	sa; //?

	ft_printf("Server is starting...\n", 1);
	ft_printf("Server started with PID %d\n", getpid());
	ft_printf("Awaiting for message... \n");
	ft_printf("Message: \n");
	sa.sa_flags = SA_RESTART | SA_SIGINFO;
	sa.sa_sigaction = client_sig;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		ft_putstr_fd("Error with SIGUSR1\n", 1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		ft_putstr_fd("Error with SIGUSR2\n", 1);
	while (1)
	{
	pause();
	}
	return (0);
}