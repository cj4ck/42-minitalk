/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:05:23 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 09:50:07 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

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
	int		i;
	int		result;
	int		sign;

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

long	ft_atol(const char *str)
{
	long		i;
	long		result;
	int			sign;

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
// 	long res;
// 	long lib;
// 	res = ft_atoi("2147483648");
// 	lib = atoi("214748364");
// 	printf("num: %d\n", res);
// 	printf("lib: %d\n", lib);
// 	return 0;
// }
