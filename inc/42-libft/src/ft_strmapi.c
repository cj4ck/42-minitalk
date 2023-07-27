/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:02:14 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/19 20:30:05 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief 	Applies the function ’f’ to each character of the
		string ’s’, and passing its index as first argument
		to create a new string (with malloc(3)) resulting
		from successive applications of ’f’.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return char The string created from the successive applications of ’f’.
	Returns NULL if the allocation fails. |  	
	returns pointer to created array of pointers 
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	cipher(unsigned int i, char str)
// {	
// 	return (str + 1);
// }
// int	main()
// {
// 	char	str1[] = "Hello world!";
// 	char	*str2;
// 	printf("Before encription - %s\n", str1);
// 	str2 = ft_strmapi(str1, cipher);
// 	printf("Cipher - %s\n", str2);
// 	return 0;
// }
