/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:51:09 by cjackows          #+#    #+#             */
/*   Updated: 2023/03/30 19:55:18 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

int	main(int ac, char **av)
{
	int					pid;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		return (0);
	}
	else
	{
		ft_putendl_fd("X", 1);
		return (1);
	}
}