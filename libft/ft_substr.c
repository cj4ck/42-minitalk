/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:23:07 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 16:54:21 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc) and returns a substring from the string 's'.
 * The substring begins at index ’start’ and is of maximum size ’len’.
 * @param s	The string from which to create the substring. 
 * @param start	The start index of the substring in the string ’s’.
 * @param len	The maximum length of the substring.
 * @return char* to allocated with subtring memory. 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	while (start <= ft_strlen(s) && i < len)
	{
		str[i] = s[i + start];
		i ++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	const char	s[] = "1234567890";
// 	printf("%s\n", ft_substr(s, 0, 4));
// }