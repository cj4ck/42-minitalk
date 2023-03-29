/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:53:04 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/18 19:14:36 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new
 * string, which is the result of the concatenation of ’s1’ and ’s2’.
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return Char pointer to the new string.
 * 	NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(sizeof(char) * (len + 1));
	ft_memmove (new_str, s1, ft_strlen(s1));
	ft_memmove (new_str + ft_strlen(s1), s2, ft_strlen(s2));
	new_str[len] = '\0';
	return (new_str);
}

	// OR
	// size_t	i;
	// size_t	l;

	// i = 0;
	// l = 0;
	// while (i < ft_strlen(s1))
	// {
	// 	*(char *)(new_str + i) = *(char *)(s1 + i);
	// 	i++;
	// }
	// while (l < ft_strlen(s2))
	// {
	// 	*(char *)(new_str + i + l) = *(char *)(s2 + l);
	// 	l++;
	// }
	// new_str[len] = '\0';
	// return (new_str);

// int main()
// {
// 	char str1[] = "Hello, ";
// 	char str2[] = "World!";
// 	printf("%s\n", ft_strjoin(str1, str2));
// }