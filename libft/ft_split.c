/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:00:15 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/21 18:29:42 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts "words" between delimiters.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return size_t of "words"
 */
static int	ft_wordcount(char const *str, char c)
{
	int	i;
	int	count;

	if (str == 0 || str[0] == 0)
		return (0);
	i = 1;
	count = 0;
	if (str[0] != c)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

/**
 * @brief Allocates (with malloc(3)) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must end with a NULL pointer.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return ** char - The array of new strings resulting from the split.
NULL if the allocation fails.
 */
char	**ft_split(const char *s, char c)
{
	int		i;
	char	**tab_str;
	size_t	word_len;
	int		len;

	len = ft_wordcount(s, c);
	tab_str = malloc(sizeof(*tab_str) * (len + 1));
	if (s == 0 || tab_str == 0)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		if (!ft_strchr(s, c))
			word_len = ft_strlen(s);
		else
			word_len = ft_strchr(s, c) - s;
		tab_str[i++] = ft_substr(s, 0, word_len);
		s += word_len;
	}
	tab_str[i] = NULL;
	return (tab_str);
}

// int	main()
// {
// 	char	**split;
// 	const char	*s ="Hello World!";
// 	char	c = ' ';
// 	int i;
// 	i = 0;
// 	// printf("Words: %d\n", ft_wordcount(s, c));
// 	split = ft_split(s, c);
// 	while(split[i])
// 	{
// 		printf("%d: \"%s\"\n",i, split[i]);
// 		i++;
// 	}
// 	return (0);
// }