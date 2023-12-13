/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:50:46 by mheinke           #+#    #+#             */
/*   Updated: 2023/12/13 08:14:07 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	check_terminal_arguments(int argc, char **argv)
{
	if (argc > 2)
		error("Wrong Input. Example: ./so_long [Map Name].\n");
	if (argc < 2)
		error("The Map file is missing. Example: ./so_long [Map Name].\n");
	if (!ft_strnstr(&argv[1][ft_strlen(argv[1]) - 4], ".ber", 4))
 		error("Map file extention is wrong (It should be .ber).\n");
}
