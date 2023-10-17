/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:34 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 12:17:14 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_isdigit function checks if a given character is a digit (0-9).
 *
 * @param c - The character to be checked.
 *
 * Description:
 * The ft_isdigit function takes an integer 'c' representing a character's
 * ASCII value. It checks if the character's ASCII value falls within the
 * range of digits (ASCII values 48 to 57). If the condition is met,
 * indicating that the character is a digit, the function returns 1.
 * Otherwise, it returns 0.
 */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
