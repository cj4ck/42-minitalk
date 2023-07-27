/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:29:20 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/24 09:56:45 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Compares strings to see if one of them is greater, less or equal.
 * "abc" > "aba"   ->    returns 1
 * ""  =  ""     ->    returns 0
 * "a"  < "abc"   ->    returns -1
 * @param str1 String 1
 * @param str2 String 2
 * @param n Value up to how many characters we are searching trough.
 * @return Returns a negative, zero, or positive integer depending on 
 * whether the first n characters of the object pointed to by 'str1' are 
 * less than, equal to, or greater than the first n characters of the 
 * object pointed to by 'str2'.
 */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && i < n - 1 && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int		main(void)
// {
// 	char	str1[] = {"424242"};
// 	char	str2[] = {"424242"};
// 	if (ft_strncmp(str1, str2, 2) == 0)
// 		printf("First 2 symbols are identical\n");
// 	else
// 		printf("First 2 symbols are not identical\n");
// 	return (0);
// }
