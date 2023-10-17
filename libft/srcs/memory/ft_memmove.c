/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:05:08 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 15:07:28 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_memmove function copies a block of memory from the source
 *	to the destination, handling overlapping memory regions.
 * @param dest - A pointer to the destination memory block.
 * @param src - A pointer to the source memory block.
 * @param n - The number of bytes to copy.
 * @return A pointer to the destination memory block.
 *
 * Description:
 * The ft_memmove function takes a pointer to the destination memory
 * block (dest), a pointer to the source memory block (src), and the
 * number of bytes to copy (n). It starts by assigning the value of
 * 'dest' to 'dest_ptr' to keep track of the original destination pointer.
 * Then, it checks if both 'dest' and 'src' pointers are not NULL. If
 * either of them is NULL, it returns the 'dest' pointer as it indicates
 * an invalid operation. It checks if 'dest' and 'src' pointers are the
 * same. If they are the same, it indicates that the memory regions overlap,
 * so there is no need to perform any copying. In this case, it returns
 * the 'dest' pointer without modifying the memory. If the destination
 * pointer is greater than the source pointer, it means that the memory
 * regions do not overlap, and it can safely perform a forward copy.
 * It enters a loop that iterates 'n' times, copying each byte from the
 * source to the destination. The function uses pointer arithmetic and
 * type casting to access and copy the bytes. It dereferences the 'dest'
 * and 'src' pointers, assigns the value at 'src' to 'dest', and then
 * increments both 'dest' and 'src' pointers to move to the next byte.
 * This process continues until 'n' becomes zero, indicating that the
 * required number of bytes have been copied. If the destination pointer
 * is less than the source pointer, it means that the memory regions
 * overlap, and it needs to perform a backward copy to prevent data
 * corruption. It enters a loop that iterates 'n' times, starting from
 * the end of the memory regions, copying each byte from the source to
 * the destination. The function uses pointer arithmetic and type casting
 * to access and copy the bytes. It assigns the value at 'src' to 'dest',
 * but it decrements both 'dest' and 'src' pointers to move backward to
 * the previous byte. This process continues until 'n' becomes zero,
 * indicating that the required number of bytes have been copied. Finally,
 * it returns the 'dest_ptr' pointer, which points to the start of the
 * destination memory block.
 *
 * Example:
 * char src[] = "Hello";
 * char dest[6];
 * ft_memmove(dest, src, sizeof(src));
 * (The contents of 'src' are copied to 'dest')
 *
 * int numbers[] = {1, 2, 3, 4, 5};
 * ft_memmove(numbers + 1, numbers, 4 * sizeof(int));
 * (The contents of 'numbers' array are shifted to the right by one position)
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
