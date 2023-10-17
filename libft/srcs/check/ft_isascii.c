/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:12:46 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 12:14:02 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_isascii function checks if a given character is
 * 	a valid ASCII character.
 *
 * @param c - The character to be checked.
 *
 * Description:
 * The ft_isascii function takes an integer 'c' representing a character's
 * ASCII value. It checks if the character's ASCII value is within the
 * valid ASCII range (0 to 127). If the condition is met, indicating that
 * the character is a valid ASCII character, the function returns 1.
 * Otherwise, it returns 0.
 */

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
