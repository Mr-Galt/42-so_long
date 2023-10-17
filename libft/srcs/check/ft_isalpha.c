/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:08:27 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 12:11:38 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_isalpha function checks if a given character is an
 * 	alphabetic character (A-Z or a-z).
 * @param c - The character to be checked.
 *
 * Description:
 * The ft_isalpha function takes an integer 'c' representing a character's
 * ASCII value. It checks if the character's ASCII value falls within the
 * range of uppercase letters (ASCII values 65 to 90) or lowercase
 * letters (ASCII values 97 to 122). If the condition is met, indicating
 * that the character is an alphabetic character, the function returns
 * 1. Otherwise, it returns 0.
 */

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1024);
	return (0);
}
