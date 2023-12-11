/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:50:46 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/16 19:06:43 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	check_terminal_arguments(int argc, char **argv)
{
	int	map_name;

	map_name = ft_strlen(argv[1]);
	if (argc > 2)
		error("Too many arguments (It should be only two).\n");
	if (argc < 2)
		error("The Map file is missing.\n");
	if (!ft_strnstr(&argv[1][map_name - 4], ".ber", 4))
 		error("Map file extention is wrong (It should be .ber).\n");
}
