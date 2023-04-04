/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:29:28 by cjackows          #+#    #+#             */
/*   Updated: 2023/04/03 12:11:42 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Function returns a negative, zero, or positive integer depending on 
 * whether the first n characters of the object pointed to by s1 are 
 * less than, equal to, or greater than the first n characters of the object 
 * pointed to by s2. 
 * @param s1 first string
 * @param s2 second string
 * @param n up to how many characters we are searching trough
 * @return Returns int difference between both strings (ASCII value) or 0 
 * if they are the same.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	unsigned char src[15] = "1234567890";
//	unsigned char dst[15] = "1234567890";

//	if (memcmp (src, dst, 12) == 0)
//		printf ("Identical\n");
//	else
//		printf ("Not identical\n");
//	return 0;
//}