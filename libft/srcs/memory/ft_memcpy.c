/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:00:45 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 15:04:48 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_memcpy function copies a block of memory from the
 *	source to the destination.
 * @param dest - A pointer to the destination memory block.
 * @param src - A pointer to the source memory block.
 * @param n - The number of bytes to copy.
 * @return A pointer to the destination memory block.
 *
 * Description:
 * The ft_memcpy function takes a pointer to the destination memory block
 * (dest), a pointer to the source memory block (src), and the number of bytes
 * to copy (n). It starts by assigning the value of 'dest' to 'dest_ptr' to
 * keep track of the original destination pointer. Then, it checks if both
 * 'dest' and 'src' pointers are not NULL. If either of them is NULL, it
 * returns the 'dest' pointer as it indicates an invalid operation. Otherwise,
 * it enters a loop that iterates 'n' times, copying each byte from the source
 * to the destination. The function casts the 'dest' and 'src' pointers to char
 * pointers to ensure byte-wise copying. It dereferences the pointers, assigns
 * the value at 'src' to 'dest', and then increments both 'dest' and 'src'
 * pointers to move to the next byte. This process continues until 'n' becomes
 * zero, indicating that the required number of bytes have been copied.
 * Finally, it returns the 'dest_ptr' pointer, which points to the start of the
 * destination memory block.
 *
 * Example:
 * char src[] = "Hello";
 * char dest[6];
 * ft_memcpy(dest, src, sizeof(src));
 * (The contents of 'src' are copied to 'dest')
 *
 * int numbers[] = {1, 2, 3, 4, 5};
 * int copy[5];
 * ft_memcpy(copy, numbers, 5 * sizeof(int));
 * (The contents of 'numbers' array are copied to 'copy' array)
 */

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}
