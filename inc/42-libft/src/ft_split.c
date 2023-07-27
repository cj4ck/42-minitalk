/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:00:15 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:23:37 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	get_lentht_of_part(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_get_number_of_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s)
			i++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (i);
}

static int	get_word(char	**result, int i, char const *s, char c)
{
	int		lentht_of_word;

	lentht_of_word = get_lentht_of_part(s, c);
	result[i] = (char *)malloc(lentht_of_word + 1);
	if (!result[i])
	{
		while (--i >= 0)
		{
			free(result[i]);
		}
		free(result);
		return (0);
	}
	ft_memcpy(result[i], s, (unsigned long)lentht_of_word);
	result[i][lentht_of_word] = '\0';
	return (1);
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
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	res = (char **)malloc((ft_get_number_of_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!get_word(res, i, s, c))
				return (0);
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	res[i] = 0;
	return (res);
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
