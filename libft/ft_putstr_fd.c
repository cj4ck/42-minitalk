/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:11:35 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/16 17:32:07 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Pass the string "s" to the given file descriptor.
 * 
 * @param s String passed as parameter
 * @param fd File descriptor
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (s || fd >= 0)
		write(fd, s, ft_strlen(s));
}

// int main ()
// {
// 	char str[] = "Hello World!\n";
// 	ft_putstr_fd(str, 1);
// 	return (0);
// }