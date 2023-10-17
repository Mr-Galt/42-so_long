/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:49:08 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 14:51:39 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_bzero function sets a block of memory to zero.
 * @param s - A pointer to the memory block.
 * @param n - The number of bytes to set to zero.
 *
 * Description:
 * The ft_bzero function takes a pointer to a memory block and the number of
 * bytes to set to zero. It treats the memory block as an array of unsigned
 * characters (bytes) and iterates through each byte in the block. In each
 * iteration, it assigns the value 0 to the current byte by dereferencing the
 * 's' pointer and casting it to an unsigned char pointer. Then, it increments
 * the 's' pointer to point to the next byte. This process continues until 'n'
 * becomes zero, at which point the entire memory block has been set to zero.
 * The function modifies the memory directly, effectively zeroing out the
 * specified number of bytes starting from the given memory address.
 *
 * Example:
 * char buffer[10];
 * ft_bzero(buffer, sizeof(buffer));
 * (All bytes in 'buffer' are set to zero)
 *
 * int numbers[5];
 * ft_bzero(numbers, 5 * sizeof(int));
 * (All bytes in 'numbers' array are set to zero)
 */

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}
