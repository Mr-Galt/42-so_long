/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:21:50 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 14:23:30 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_lstiter function applies a given function to each element
 * 	of a linked list.
 * @param lst - A pointer to the first element of the list.
 * @param f - A function pointer to the function to be applied to each element's
 *	content.
 *
 * Description:
 * The ft_lstiter function takes a pointer to the first element of
 * a linked list (lst) and a function pointer 'f' that points to a
 * function which will be applied to the content of each list element.
 * It starts by checking if the 'lst' pointer or the 'f' function
 * pointer is NULL. If either of them is NULL, it indicates an
 * invalid operation or an attempt to iterate over an empty list, and
 * the function returns without doing anything.
 *
 * The function then proceeds to iterate over each element of the
 * linked list using a while loop. During each iteration, it does the
 * following:
 *
 * 1. It applies the function 'f' to the content of the current element
 * (lst->content). This step allows 'f' to process or modify the content
 * as needed.
 * 2. It advances the 'lst' pointer to point to the next element in the
 * list by setting it to lst->next. This allows the function to move to
 * the next element in the next iteration of the loop.
 * 3. The loop continues until the 'lst' pointer becomes NULL, indicating
 * the end of the list. In other words, the function iterates over all
 * elements of the linked list, applying the function 'f' to each element's
 * content in the process.
 *
 * Example:
 * void print_content(void *content)
 * {
 *   printf("Content: %s\n", (char *)content);
 * }
 *
 * t_list *lst = ft_lstnew("Hello");
 * ft_lstadd_back(&lst, ft_lstnew("World"));
 * ft_lstiter(lst, print_content);
 * (The function will print "Content: Hello" and "Content: World")
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
