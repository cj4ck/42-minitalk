/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:41:52 by cjackows          #+#    #+#             */
/*   Updated: 2023/04/03 11:14:33 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"
#include "libft/libft.h"

int	main(void)
{
	struct sigaction	signal_action; //?

	ft_putstr_fd("Server is starting...\n", 1);
	ft_putstr_fd("Server started with PID ", 1);
	ft_putnbr_fd(getpid(), 1);

	ft_putstr_fd("\nMessage: ", 1);
	while (1)
	{
	pause();
	}
	return (0);
}