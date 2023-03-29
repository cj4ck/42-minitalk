/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:21:51 by cjackows          #+#    #+#             */
/*   Updated: 2022/06/21 20:45:03 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node ’new’ at the end of the list.
 * 
 * @param lst  The address of a pointer to the first link of a list
 * @param new  The address of a pointer to the node to be added to the list
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*temp;

	temp = *lst;
	if (!temp)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(temp);
	temp -> next = new;
}
