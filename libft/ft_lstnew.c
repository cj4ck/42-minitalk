/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:20:15 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/21 18:50:45 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new node (ptr).
 * The variable ’content’ (in t_list) is initialized with the value of ’content’
 * The variable ’next’ is initialized to NULL.
 * 
 * @param content The content to create the node with.
 * @return t_list* The new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list) * 1);
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

// int	main()
// {
// 	t_list	*b;
// 	b = ft_lstnew("hello");
// 	printf("%s\n", (char *)(b -> content));
// }