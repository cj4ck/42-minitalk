/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:20:42 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 16:00:33 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Function returns a pointer to the first occurrence of the 
 * character 'c' within the first 'n' characters of the object pointed to by s. 
 * If c isn't found, it returns a null pointer.
 * @param s String that we search trough.
 * @param c The character that we are looking for.
 * @param n  Search within the first n characters of the object pointed to by s.
 * @return void* 
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
