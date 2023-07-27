/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 03:33:33 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:56:11 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief 	Function appends the NUL-terminated string 'src' to the end of 'dst'.
 * Takes whole size of destination buffer not only the size
 * It garantees null termination (as long size > 0 && dest 
 * has at least onefree space)
 * Function does not check if 'dts' or 'src' is NULL!
 * @param dst String where 'src' gets appended to.
 * @param src String that gets appended to the end of 'dst' 
 * @param dstsize How many characters of 'dst' gets appended.
 * @return 	Returns size_t of src + dst (without NUL) OR NULL if fails.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;
	size_t	j;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	j = ldst;
	if (ldst < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && (ldst + i < dstsize - 1))
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (ldst >= dstsize)
		ldst = dstsize;
	return (ldst + lsrc);
}

// int	main(void)
// {
// 	const char	src[] = "1111111111";
// 	char		dst[] = "0987654321";
// 	printf("before: %s\n", dst);
// 	ft_strlcat(dst, src, 15);
// 	printf("after: %s\n", dst);
// 	return (0);
// }
