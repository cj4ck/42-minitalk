/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:25:20 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:54:23 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief   Function finds the last occurrence of 'c'
 * (converted to a character) in string.
 * The ending NULL character is considered part of the string.
 * If 's' doesnt end with NULL program might crash.
 * @param s String
 * @param c Character that gets searched in 's'.
 * @return char*    Returns a pointer to the last
 * occurrence of 'c' in string.
 * Returns NULL if 'c' is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptr = ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (ptr);
}

// 	int	main(void)
// 	{
// 	char	str[] = "lol111111111111o";
// 	int	ch = 'o';
// 	char	*ach;
// 	ach = ft_strrchr(str, ch);
// 	if (ach == NULL)
// 		printf ("We didn't find it\n");
// 	else
// 		printf ("We found it on position - %ld\n", (ach-str+1));
// 	return (0);
// }