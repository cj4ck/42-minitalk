/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:18:34 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/16 18:11:29 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Recursive function for passing the integer "n"
 * 			 to the given file descriptor.
 * 
 * @param n Passed integer
 * @param fd File descriptor
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, "8", 1);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

// int main ()
// {
// 	int num0 = -2147483648;
// 	int num1 = 2147483647;
// 	int num2 = 69;
// 	ft_putnbr_fd(num0, 1);
// 	printf("\n");
// 	ft_putnbr_fd(num1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(num2, 1);
// 	printf("\n");
// 	return 0;
// }