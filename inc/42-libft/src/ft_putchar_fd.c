/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:08:34 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/16 17:31:57 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Outputs the character "c" to the given file descriptor.
 * 
 * @param c Character
 * @param fd File descriptor
 */
void	ft_putchar_fd(char c, int fd)
{
	if (c || fd >= 0)
		write(fd, &c, 1);
}

// int main ()
// {
// 	int	i;
// 	i = 0;
// 	char	str[] = "Hello world!";
// 	while (str[i] != '\0')		
// 		ft_putchar_fd(str[i++], 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }
