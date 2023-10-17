/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:34:13 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 12:37:14 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief he ft_lstdelone function deallocates the memory occupied by a single
 * element of a linked list while using a user-provided function to free
 * the content of that element.
 * @param lst - A pointer to the element to be deallocated.
 * @param del - A function pointer to the function used to free the content
 * of the element.
 *
 * Description:
 * The ft_lstclear function takes a pointer to the pointer to the first element
 * of a linked list (lst) and a function pointer 'del' that points to a
 * function responsible for freeing the memory of the content of each list
 * element. It starts by checking if the 'lst' pointer, the 'del' function
 * pointer, or the pointer to the first element (*lst) is NULL. If any of them
 * is NULL, it indicates an invalid operation or an empty list, and the
 * function returns without doing anything.
 *
 * The function then proceeds to clear the list recursively using the following
 * steps:
 *
 * 1. It calls ft_lstclear recursively on the 'next' pointer of the current
 * element, effectively traversing the list to its end.
 * 2. For each element during the recursive traversal, the 'del' function is
 * called to free the memory of the content (if it was allocated dynamically).
 * This step ensures that the memory occupied by the content of each element
 * is properly freed.
 * 3. After freeing the content, the current element is deallocated using the
 * free function to release the memory occupied by the element itself.
 * 4. Finally, the 'lst' pointer is set to NULL to indicate that the list is
 * now empty.
 *
 * The result is that all elements of the linked list are freed, including
 * their content, and the 'lst' pointer is set to NULL, indicating that the
 * list is empty.
 *
 * Example:
 * void del_content(void *content)
 * {
 * free(content);
 * }
 *
 * t_list *lst = ft_lstnew("Hello");
 * ft_lstadd_back(&lst, ft_lstnew("World"));
 * ft_lstclear(&lst, del_content);
 * (Both elements of the list are deallocated, and 'lst' is set to NULL)
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}
