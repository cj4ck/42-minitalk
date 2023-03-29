/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:24:20 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:55:10 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Function locates the first occurrence of the null-terminated 
 * string 'needle' in the string 'haystack', 
 * where not more than 'len' characters are searched.
 * Characters that appear after a \0 character are not searched.
 * @param haystack Bigger string where it searches for 'needle'.
 * @param needle Smaller string that is getting searched in 'haystack'.
 * @param len Up to how many characters we are searching in 'haystack'.
 * @return char* 	Returns pointer to position in 'haystack' if found.
 * 					Returns pointer to 'haystack' if 'needle' is empty.
 *					Returns NULL if not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*hs;

	i = 0;
	hs = (char *) haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hs);
	while (hs[i] && i < len)
	{
		j = 0;
		while (hs[i + j] && needle[j] && hs[i + j] == needle[j]
			&& i + j < len)
			j++;
		if (j == n_len)
			return (hs + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	lstr[] = "123423789";
// 	const char	sstr[] = "237";
// 	char *ptr;
// 	ptr = ft_strnstr(lstr, sstr, 7);
// 	if(ptr == NULL)
//       printf("We didn't find it\n");
//    else
//       printf("We found it on position - %ld\n", (ptr-lstr+1));
//    return 0;
// }