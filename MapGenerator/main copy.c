/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:50 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/07 14:35:39 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MapGenerator/map_generator.h"

int	main(void)
{
	map_main(20, 10, 37);
	printf("Did it!");
	return (0);
}