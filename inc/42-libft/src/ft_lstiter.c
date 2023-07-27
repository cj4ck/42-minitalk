/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:26:25 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:17:37 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content 
 * of each node.
 * 
 * @param lst  The address of a pointer to a node.
 * @param f  The address of the function used to iterate on the list.
 */
// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	t_list	*tmp;

// 	if (!lst)
// 		return ;
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		f(tmp->content);
// 		tmp = tmp->next;
// 	}
// }
