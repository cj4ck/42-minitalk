/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 22:27:00 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:57:31 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Function duplicates a string and returns a pointer 
 * pointing to the first byte of copied string. || 
 * It tries to allocate (with malloc) enough memory to hold the old string 
 * (plus a '\0' character to mark the end of the string).
 * @param s1 pointer to string that gets duplicated.
 * @return char*  Return the new address (which the caller is responsible for 
 * freeing at some point).
 * If the allocation failed returns NULL.
 */
char	*ft_strdup(const char *s1)
{
	char	*output_str;
	int		i;

	output_str = (char *)malloc(sizeof (char) * ft_strlen(s1) + 1);
	i = 0;
	if (!output_str)
		return (NULL);
	while (s1[i])
	{
		output_str[i] = s1[i];
		i++;
	}
	output_str[i] = '\0';
	return (output_str);
}

// int	main(void)
// {
// 	char	*src = "123456";
// 	char	*str;
// 	str = ft_strdup(src);
// 	printf("%s \n", str);
// 	return 0;
// }