/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:15:48 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 12:16:37 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_isprint function checks if a given character is a printable
 * 	character.
 *
 * @param c - The character to be checked.
 *
 * Description:
 * The ft_isprint function takes an integer 'c' representing a character's
 * ASCII value. It checks if the character's ASCII value falls within the
 * range of printable characters (ASCII values 32 to 126). If the condition
 * is met, indicating that the character is a printable character, the
 * function returns 1. Otherwise, it returns 0.
 */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
