/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:33:16 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/21 22:56:27 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief	Function used to allocate multiple blocks of memory having the 
 * same size. Different to malloc, sets all places to '\0'.
 * It is a dynamic memory allocation function that allocates the memory space
 * to complex data structures such as arrays and structures and returns a void
 * pointer to the memory. Calloc stands for contiguous allocation.
 * @param count How many bytes of memory we want to alocate.
 * @param size Size of one place. (sizeof(int) etc)
 * @return void* The pointer which is currently at the first byte of the
 * allocated memory space is returned.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count >= 4294967295 || size >= 4294967295)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*ptr;
// 	ptr = (int*)ft_calloc(10, sizeof(int));
// 	if (ptr == NULL)
// 		printf("Memory not allocated \n");
// 	else 
// 		printf("Memory allocated successfully \n");
// 	free(ptr);
// 	return (0);
// }
