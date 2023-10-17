/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:25:43 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 14:48:05 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_lstmap function creates a new linked list by applying a given
 *	function to each element of an existing linked list. The resulting
 *	transformed elements are used to form a new list.
 * @param lst - A pointer to the first element of the original list.
 * @param f - A function pointer to the function that will be applied to each
 *	element's content.
 * @param del - A function pointer to the function used to free the memory of
 *	each element's content.
 * @return A pointer to the first element of the newly created list. If the
 *	original list is empty or any of the function pointers 'f' or 'del'
 *	is NULL, the function returns NULL.
 *
 * Description:
 * The ft_lstmap function takes a pointer to the first element of an
 * existing linked list (lst), a function pointer 'f' that points to a
 * function responsible for transforming the content of each list
 * element, and a function pointer 'del' that points to a function used
 * to free the memory of each element's content in case of errors.
 *
 * If any of the input parameters (lst, f, or del) is NULL, the function
 * returns NULL immediately, indicating an invalid operation.
 *
 * The function iterates through the original list using a while loop,
 * processing each element one by one. For each element, the following
 * steps are performed:
 *
 * 1. The 'f' function is applied to the content of the current element
 * (lst->content) to transform it.
 * 2. The transformed content is then used to create a new element using
 * the ft_lstnew function. If memory allocation fails, the function frees the
 * memory of the newly created elements in the new list using the ft_lstclear
 * function, and returns NULL to indicate an error.
 * 3. If memory allocation is successful, the new element is added to the new
 * list by updating the 'next' pointer of the last element (new_set) to point
 * to the newly created element.
 * 4. The 'new_set' pointer is moved to point to the newly added element to
 * keep track of the last element in the new list.
 * 5. The 'lst' pointer is then moved to the next element in the original list
 * for the next iteration.
 *
 * After processing all elements in the original list, the function returns
 * a pointer to the first element of the new list, effectively pointing
 * to the new list containing transformed elements. If any error occurs
 * during the process, the function returns NULL after freeing the memory
 * of the newly created list and its elements' content using the ft_lstclear
 * function.
 *
 * It's important to note that the ft_lstnew function is used to create a
 * new list element with the transformed content and that the ft_lstclear
 * function is used to deallocate memory in case of errors.
 *
 * Example:
 * void *transform_content(void *content)
 * {
 *     // Check if the content pointer is valid
 *     if (content == NULL) {
 *         return (NULL);
 * }
 *     char *str = (char *)content;
 *     char *result = strdup(str); // Duplicate the original content
 *     // Convert each character in the duplicated string to uppercase
 *     for (size_t i = 0; result[i]; i++) {
 *         result[i] = toupper(result[i]);
 *     }
 *     return (result);
 * }
 *
 * void free_content(void *content)
 * {
 *     free(content);
 * }
 *
 * t_list *lst = ft_lstnew("hello");
 * ft_lstadd_back(&lst, ft_lstnew("world"));
 * t_list *new_lst = ft_lstmap(lst, transform_content, free_content);
 *
 * (The function will create a new list with transformed content, e.g., "HELLO"
 * and "WORLD")
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
