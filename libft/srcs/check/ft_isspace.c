/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:26:32 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/17 12:11:17 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_isspace function checks if a given character is a whitespace
 * 	character.
 * @param c - The character to be checked.
 *
 * Description:
 * The ft_isspace function takes an integer 'c' representing a character's
 * ASCII value. It checks if the character falls within the range of
 * whitespace characters (ASCII values 9 to 13) or if it is the space
 * character (ASCII value 32). If the condition is met, indicating that
 * the character is a whitespace character, the function returns 1.
 * Otherwise, it returns 0.
 **/

int	ft_isspace(int c)
{
	if ((c > 8 && c < 14) || (c == 32))
		return (1);
	return (0);
}
