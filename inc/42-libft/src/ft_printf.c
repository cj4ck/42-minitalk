/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:39:04 by cjackows          #+#    #+#             */
/*   Updated: 2023/04/03 11:47:49 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	format_check(va_list args, const char format_specifier)
{
	if (format_specifier == 'c')
		return ((ft_print(va_arg(args, int), "420vibes")));
	else if (format_specifier == 's')
		return (ft_print(1, va_arg(args, char *)));
	else if (format_specifier == 'd' || format_specifier == 'i')
		return (ft_putnbr("d0123456789", 10, va_arg(args, int)));
	else if (format_specifier == 'u')
		return (ft_putnbr("u0123456789", 10, va_arg(args, unsigned int)));
	else if (format_specifier == 'x')
		return (ft_putnbr("x0123456789abcdef", 16, va_arg(args, unsigned int)));
	else if (format_specifier == 'X')
		return (ft_putnbr("x0123456789ABCDEF", 16, va_arg(args, unsigned int)));
	else if (format_specifier == 'p')
		return (ft_pointer("p0123456789abcdef", va_arg(args, size_t)));
	else if (format_specifier == '%')
		return (write(1, &format_specifier, 1));
	else
	{
		write(1, "%", 1);
		return (write(1, &format_specifier, 1) + 1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		str_index;
	int		str_len;
	int		temp;
	va_list	args;

	str_len = 0;
	str_index = 0;
	temp = 0;
	va_start(args, str);
	while (str[str_index])
	{
		if (str[str_index] == '%')
		{
			temp = format_check(args, str[str_index + 1]);
			str_len += temp;
			str_index++;
		}
		else
			str_len += write(1, &str[str_index], 1);
	str_index++;
	}
	va_end(args);
	return (str_len);
}

int	ft_print(char c, char *str)
{
	if (c != 1)
		return (write(1, &c, 1));
	else if (str)
		return (write(1, str, ft_strlen(str)));
	else
		return (ft_print(1, "(null)"));
	return (0);
}

int	ft_putnbr(const char *c, int base, size_t nbr)
{
	int					i;
	long long			temp;

	i = 0;
	temp = nbr;
	if (c[0] == 'd')
	{
		if (temp < 0)
		{				
			i += ft_print('-', "ignore");
			nbr *= -1;
		}
	}
	if (nbr == 0)
		i += ft_print('0', "ignore");
	if (nbr >= (unsigned long int)base)
	{
		i += ft_putnbr(c, base, nbr / base);
		i += ft_putnbr(c, base, nbr % base);
	}
	if (nbr < (unsigned long int)base && nbr != 0)
		i += ft_print(c[nbr + 1], "ignore");
	return (i);
}

int	ft_pointer(const char *hex, size_t ptr)
{
	if (!ptr)
		return (ft_print(1, "0x0"));
	return (ft_print(1, "0x") + ft_putnbr(hex, 16, ptr));
}
