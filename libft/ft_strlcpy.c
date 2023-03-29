/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:29:56 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:55:51 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief   Returns the total length of the string that would have been copied
 * if there was unlimited space. This might or might not be equal to the length
 * of the string actually copied, depending on whether there was enough space.
 * Copies up to 'dstsize' - 1 characters from the string 'src' to 'dst'gets
 *  null-terminated.If src and dst strings overlap, the behavior is undefined.
 * Function does not check if 'dts' or 'src' is NULL!
 * @param dst Destination string.
 * @param src Source string.
 * @param dstsize Lenght that gets copied(NULL should already be included).
 * @return Returns size_t of total len of string that function tried to create.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((src[i]) && (i < (dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	const char	src[10] = "1234567890";
// 	char	dst[10] = "0987654321";
// 	ft_strlcpy (dst, src, 6);
// 	printf("dst: %s\n", dst);
// 	return 0;
// }
