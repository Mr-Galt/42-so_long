/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:42:07 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 14:47:39 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_lstnew function creates a new linked list element with the
 *	provided content.
 * @param content - A pointer to the content to be stored in the new list
 *	element.
 * @return A pointer to the newly created list element (node). If memory
 *	allocation fails, the function returns NULL.
 *
 * Description:
 * The ft_lstnew function takes a pointer to the content that needs
 * to be stored in the new list element. It starts by allocating
 * memory for the new list element using the 'malloc' function, with
 * the size of 't_list' structure. If the memory allocation fails
 * (i.e., 'malloc' returns NULL), the function returns NULL,
 * indicating that it was not able to create the new list element due
 * to memory shortage.
 *
 * If memory allocation is successful, the function proceeds to set
 * the 'content' and 'next' fields of the new list element. The
 * 'content' field is assigned the value of the 'content' pointer
 * passed as an argument, which allows the list element to store the
 * content provided by the user. The 'next' field is initialized to
 * NULL, indicating that this list element does not point to any
 * other element (it's the last element of the list initially).
 *
 * After setting up the content and next fields, the function returns
 * a pointer to the newly created list element, enabling the user to
 * use it as needed to build a linked list.
 *
 * Example:
 * t_list *new_element = ft_lstnew("Hello, World!");
 * (A new list element is created with the content "Hello, World!")
 *
 * t_list *empty_element = ft_lstnew(NULL);
 * (A new list element is created with no content (content pointer is NULL))
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
