/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:20:56 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/18 18:39:13 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Converts uppercase character to uppercase.
 * @param c Character that gets converted.
 * @return Returns int value of ASCII character in uppercase or 'c' if character
 * is already uppercase.
 */
int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	char	y;
// 	y = 'a';
// 	printf("%c\n", ft_toupper(y));
// }
