/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:23:25 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 15:59:35 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief	Function memcpy() is used to copy a memory block from one 
 * location to another. No NULL at the end.
function doesn’t check for overflow or \0 
 * @param dst pointer where stuff gets copied to
 * @param src stuff that gets copied into 'dst'
 * @param n up to how many characters gets copy pasted
 * @return void* 'dst'
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	char		*dst_tmp;
	const char	*src_temp;

	dst_tmp = dst;
	src_temp = src;
	if (dst_tmp == src_temp)
		return (dst_tmp);
	while (n > 0)
	{
		*dst_tmp = *src_temp;
		dst_tmp++;
		src_temp++;
		n--;
	}
	return (dst);
}

// int	main(void)
// {
// 	const char src[10] = "123456";
// 	char dst[10] = "";
// 	ft_memcpy(dst, src, 6);
// 	printf("dst: %s\n", dst);
// 	return (0);
// }
