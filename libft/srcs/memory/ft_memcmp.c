/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:58:01 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 15:00:29 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief The ft_memcmp function compares two memory areas and returns
 *	the difference between the first differing byte, if any,
 *	or 0 if the memory areas are equal.
 * @param s1 - A pointer to the first memory area.
 * @param s2 - A pointer to the second memory area.
 * @param n - The number of bytes to compare.
 * @return An integer value indicating the comparison result.
 *	0 if the memory areas are equal.
 *	A positive value if the first differing byte in s1 is greater than the
 *	corresponding byte in s2. A negative value if the first differing byte
 *	in s1 is less than the corresponding byte in s2.
 *
 * Description:
 * The ft_memcmp function takes two pointers, s1 and s2, which point to the
 * memory areas to be compared, and the number of bytes to compare, n. It
 * enters a loop that iterates n times, decrementing n in each iteration. The
 * purpose of this loop is to compare each byte in the memory areas until n
 * becomes zero. Inside the loop, it checks if the value at the current byte of
 * s1 is different from the value at the current byte of s2. If a difference is
 * found, it returns the difference between the two bytes. Since the return
 * type is int, the difference is calculated by subtracting the value at the
 * current byte of s2 from the value at the current byte of s1. By casting the
 * pointers to unsigned char, the function ensures that the comparison is done
 * on a byte-by-byte basis without any sign extension issues. After comparing
 * each byte, if no differences are found, it means the memory areas are equal,
 * so it returns 0. This function can be used to compare arrays, strings, or
 * any other memory areas in a generic manner.
 *
 * Example:
 * char arr1[] = {1, 2, 3};
 * char arr2[] = {1, 2, 4};
 * int result = ft_memcmp(arr1, arr2, sizeof(arr1));
 * (The function compares each byte in arr1 and arr2. Since the third byte is
 * different (3 vs. 4), the function returns -1)
 *
 * int a = 123;
 * int b = 123;
 * int result = ft_memcmp(&a, &b, sizeof(int));
 * (The function compares the memory area of 'a' and 'b'. Since they have the
 * same value, the function returns 0)
 */

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1 = (unsigned char *)s1 + 1;
		s2 = (unsigned char *)s2 + 1;
	}
	return (0);
}
