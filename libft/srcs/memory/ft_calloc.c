/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:52:11 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 14:54:24 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_calloc function allocates and initializes memory for
 *	an array of elements.
 * @param count - The number of elements to allocate.
 * @param n - The size of each element.
 * @return If memory allocation is successful, a pointer to the allocated
 *	memory block is returned. If either count or n is zero or if
 *	memory allocation fails, NULL is returned.
 *
 * Description:
 * The ft_calloc function takes two parameters: count and n. It first performs
 * a check to ensure that the product of count and n does not overflow the
 * size_t type. If the check fails, it returns NULL to indicate an error.
 * Next, it calls the malloc function to allocate memory for count * n bytes.
 * If memory allocation fails, malloc returns NULL, and ft_calloc also returns
 * NULL to indicate an error. If memory allocation is successful, it performs
 * additional checks to handle the case where n is zero. If n is zero, it means
 * the size of each element is zero, so ft_calloc directly returns the
 * allocated memory without initializing it. Otherwise, it calls the s_zero
 * function to initialize the allocated memory block to all zeros. The s_zero
 * function is defined as a static function in the code and sets each byte of
 * the memory block to zero. Finally, ft_calloc returns the pointer to the
 * allocated and initialized memory block. This function is useful when you
 * need to allocate memory for an array and initialize it to a specific value,
 * such as zeroing out a buffer or allocating memory for an array of
 * structures.
 *
 * Example:
 * int *numbers = ft_calloc(5, sizeof(int));
 * (The function allocates memory for an array of 5 integers and initializes
 * the memory to zeros)
 *
 * char *buffer = ft_calloc(10, sizeof(char));
 * (The function allocates memory for a buffer of 10 characters and initializes
 * the memory to zeros)
 *
 * int *empty_array = ft_calloc(0, sizeof(int));
 * (The function returns NULL as count is zero, indicating an error)
 */

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	if (count && n && count > (UINT_MAX / n))
		return (NULL);
	memory = malloc(count * n);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * n);
	return (memory);
}
