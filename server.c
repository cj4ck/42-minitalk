/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:41:52 by cjackows          #+#    #+#             */
/*   Updated: 2023/03/29 12:12:21 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"
#include "libft/libft.h"

int	main(void)
{
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd(" :Server PID\n", 1);
	ft_putstr_fd("Message: ", 1);
	while (1)
		pause();
	return (0);
}