/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:58:50 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/18 10:48:34 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	printf_uint(unsigned int n)
{
	int	digit_counter;

	digit_counter = 0;
	if (n > 9)
		digit_counter += printf_uint((n / 10));
	digit_counter += printf_char((n % 10) + 48);
	return (digit_counter);
}
