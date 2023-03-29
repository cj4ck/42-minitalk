/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:05:23 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/18 17:17:34 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Function converts the initial portion of the string
    pointed to by nptr to int.  The behavior is the same as
    strtol(nptr, NULL, 10) except that atoi() does not detect errors. ||
	Function converts string argument to integer type(returns int).
 	Stops if it reaches a no digit character, or a not '-' '+' character
 	spaces & tabs are okay only BEFORE argument
 	valid arguments: "423", "-273", "+765", "   -765"
 	((str[i] >= 9) && (str[i] <= 13)) is for checking for white spaces
 * @param str char string
 * @return int converted char string if given argument is valid, else returns 0
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char str[] = "-3 45f";
// 	int res;
// 	int lib;
// 	res = ft_atoi(str);
// 	lib = atoi(str);
// 	printf("num: %d\n", res);
// 	printf("lib: %d\n", lib);
// 	return 0;
// }