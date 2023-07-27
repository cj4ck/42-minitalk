/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:20:29 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/18 18:25:13 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Converts uppercase character to lowercase.
 * @param c Character that gets converted.
 * @return Returns int value of ASCII character in lowercase or 'c' if
 * character is already lowercase.
 */
int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char	y;
// 	y = 'A';
// 	printf("%c\n", ft_tolower(y));
// }
