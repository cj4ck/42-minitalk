/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:25:20 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:58:00 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief   function searches for the FIRST occurrence of 
 * character 'c' in string 's'.If 's' doesnt end with 
 * NULL program might cras!
 * @param s This is the string to be scanned.
 * @param c This is the character to be searched in 's'.
 * @return char* Returns a pointer to the first 
 * occurrence of c that is converted to a character in string.
 * The function returns NULL if the specified character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
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