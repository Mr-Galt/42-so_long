/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_gnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:02:19 by mheinke           #+#    #+#             */
/*   Updated: 2023/10/18 11:02:36 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin_gnl(char *buffer, char *content)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!buffer)
		return (ft_strdup_gnl(content));
	if (!content)
		return (ft_strdup_gnl(buffer));
	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen_gnl(buffer)
				+ ft_strlen_gnl(content)) + 1);
	if (!result)
		return (NULL);
	while (buffer && buffer[i])
	{
		result[i] = buffer[i];
		i++;
	}
	j = 0;
	while (content && content[j])
		result[i++] = content[j++];
	result[i] = '\0';
	free(buffer);
	return (result);
}
