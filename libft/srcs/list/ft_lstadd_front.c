/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:28:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/18 10:53:55 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_lstadd_back function adds a new element to the beginning
 *	of a linked list.
 * @param lst - A pointer to the pointer to the first element of the list.
 * @param new - A pointer to the new element to be added to the list.
 *
 * Description:
 * The ft_lstadd_front function takes a pointer to the pointer to the first
 * element of a linked list (lst) and a pointer to a new element (new) that is
 * to be added to the list. If either the 'lst' pointer or the 'new' pointer is
 * NULL, the function returns immediately, indicating an invalid operation.
 *
 * The function then proceeds to add the new element to the beginning of the
 * list:
 *
 * 1. The 'next' pointer of the new element is set to point to the current
 * first element of the list, effectively linking the new element to the rest
 * of the list.
 * 2. The 'lst' pointer is updated to point to the new element, making it the
 * new first element of the list.
 *
 * After these steps, the new element is successfully added to the front of the
 * linked list.
 *
 * Example:
 * t_list *lst = ft_lstnew("World");
 * ft_lstadd_front(&lst, ft_lstnew("Hello"));
 * (The list now contains two elements: "Hello" followed by "World")
 */

void	ft_lstadd_front(t_list **lst, t_list *new_lst)
{
	if (!lst || !new_lst)
		return ;
	new_lst->next = *lst;
	*lst = new_lst;
}
