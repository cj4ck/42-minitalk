/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:29:28 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/24 09:31:07 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

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
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
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
