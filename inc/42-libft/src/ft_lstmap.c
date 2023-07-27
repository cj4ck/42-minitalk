/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:26:47 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:18:05 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief	Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node. Creates a new list resulting of the 
 * successive applications of the function ’f’. 
 * The ’del’ function is used to delete the content of a node if needed.
 * @param lst The address of a pointer to a node
 * @param f The address of the function used to iterate on the list.
 * @param del  The address of the function used to delete the 
 * content of a node if needed.
 * @return The new list.
 			NULL if the allocation fails.
 */
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*lst1;
// 	t_list	*new;

// 	lst1 = NULL;
// 	while (lst)
// 	{	
// 		new = ft_lstnew(f(lst -> content));
// 		if (!new)
// 		{
// 			ft_lstclear(&lst1, del);
// 			return (lst1);
// 		}
// 		ft_lstadd_back(&lst1, new);
// 		lst = lst -> next;
// 	}
// 	return (lst1);
// }
