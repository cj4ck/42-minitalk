/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:23:13 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:54:05 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	rm_char(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

/**
 * @brief	Allocates (with malloc) and returns a copy of 's1' with the 
 * characters specified in ’set’ removed from the beginning and the end
 * of the string.
 * @param s1  The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return Returns char pointer to the trimmed string.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && rm_char(*start, set))
		++start;
	while (start < end && rm_char(*(end - 1), set))
		--end;
	str = ft_substr(start, 0, end - start);
	return (str);
}

// int	main()
// {
// 		char	*strtrim;
// 		char s1[] = "	Hello World!";
// 		if (!(strtrim = ft_strtrim(s1, "	")))
// 			printf("Error");
// 		else
// 			printf("%s\n", strtrim);
// }