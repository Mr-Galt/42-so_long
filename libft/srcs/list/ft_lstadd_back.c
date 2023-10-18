/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:18:45 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/18 10:53:46 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_lstadd_back function adds a new element to the end of a
 *	linked list.
 * @param lst - A pointer to the pointer to the first element of the list.
 * @param new - A pointer to the new element to be added to the list.
 *
 * Description:
 * The ft_lstadd_back function takes a pointer to the pointer to the
 * first element of a linked list (lst) and a pointer to a new element
 * (new) that is to be added to the list. If either the 'lst' pointer
 * or the 'new' pointer is NULL, the function returns immediately,
 * indicating an invalid operation.
 *
 * If the list is empty (i.e., the 'lst' pointer is NULL), the function
 * simply updates the 'lst' pointer to point to the new element,
 * making it the first element of the list.
 *
 * If the list is not empty, the function traverses the list to find
 * the last element:
 *
 * 1. A pointer 'ptr' is initialized to point to the first element of
 * the list.
 * 2. The function iterates through the list by following the 'next'
 * pointers until the last element is reached (i.e., 'ptr->next' is NULL).
 * 3. Once the last element is found, the 'next' pointer of the last
 * element is updated to point to the new element, effectively adding the
 * new element to the end of the list.
 *
 * After these steps, the new element is successfully added to the back
 * of the linked list.
 *
 * Example:
 * t_list *lst = ft_lstnew("Hello");
 * ft_lstadd_back(&lst, ft_lstnew("World"));
 * (The list now contains two elements: "Hello" followed by "World")
 */

void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	t_list	*ptr;

	if (!lst || !new_lst)
		return ;
	if (!(*lst))
	{
		*lst = new_lst;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new_lst;
}
