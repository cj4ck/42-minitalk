/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:18:15 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/16 17:33:54 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Pass the string "s" to the given file descriptor
 * 			followed by a newline.
 * @param s Passed string
 * @param fd File descriptor
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s || fd >= 0)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

// int main ()
// {
// 	char str[] = "Hello World!";
// 	ft_putendl_fd(str, 1);
// 	return (0);
// }