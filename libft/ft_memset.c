/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:36:41 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/21 18:26:50 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Function is used to fill a block of memory with given/particular 
 * value. It is used when you want to fill all or some of the blocks of the 
 * memory with a particular value. Function writes 'len' bytes of value 'c' 
 * (converted to an unsigned char) to the string b.
 * @param str where the character gets copied too
 * @param c the character that gets copied to str 
 			gets convertet to ASCII (int 0 = char 48)
 * @param len how many characters gets copied to str
 * @return void* str
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)b;
	while (len > i)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	unsigned char str[] = "Hello Wold!";
// 	ft_memset (str, 'a', 10);
// 	printf ("str: %s\n", str);
// 	return (0);
// }