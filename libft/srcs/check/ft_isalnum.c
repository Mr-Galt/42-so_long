/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:03:30 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 12:11:12 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_isalnum function checks if a given character is an alphanumeric
 * 	character (A-Z, a-z, or 0-9).
 * @param c - The character to be checked.
 *
 * Description:
 * The ft_isalnum function takes an integer 'c' representing a character's
 * ASCII value. It checks if the character's ASCII value falls within the
 * range of uppercase letters (ASCII values 65 to 90), lowercase letters
 * (ASCII values 97 to 122), or digits (ASCII values 48 to 57). If the
 * condition is met, indicating that the character is an alphanumeric
 * character, the function returns 1. Otherwise, it returns 0.
 **/

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	return (0);
}
