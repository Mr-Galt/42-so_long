/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:07:42 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 15:10:44 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_memset function fills a block of memory with a specified value.
 * @param str - A pointer to the block of memory to be filled.
 * @param c - The value to be set.
 * @param n - The number of bytes to be set.
 * @return A pointer to the memory block after it has been filled.
 *
 * The ft_memset function takes three parameters: str, c, and n. It starts by
 * assigning the value of str to a variable str_ptr to keep track of the
 * original pointer. It enters a loop that iterates n times, decrementing n in
 * each iteration. The purpose of this loop is to fill each byte of the memory
 * block with the value c. Inside the loop, it casts the str pointer to an
 * unsigned char pointer to ensure correct assignment on a byte-by-byte basis.
 * It assigns the value of c to the current byte by dereferencing the pointer.
 * It then increments the str pointer to move to the next byte. After filling
 * all the bytes, it returns the original str_ptr, which now points to the
 * memory block after it has been filled with the specified value. This
 * function is commonly used to initialize memory or set memory regions to a
 * specific value, such as setting an array of characters to null terminators
 * or setting an array of integers to zeros.
 *
 * Example:
 * char buffer[10];
 * ft_memset(buffer, 'A', sizeof(buffer));
 * (The function fills the buffer array with the value 'A', resulting in
 * "AAAAAAAAAA")
 *
 * int numbers[5];
 * ft_memset(numbers, 0, sizeof(numbers));
 * (The function fills the numbers array with zeros, resulting in
 * [0, 0, 0, 0, 0])
 */

void	*ft_memset(void *str, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}
