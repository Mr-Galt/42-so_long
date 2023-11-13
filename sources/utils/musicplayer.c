/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   musicplayer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:32 by mheinke           #+#    #+#             */
/*   Updated: 2023/11/13 14:59:24 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int get_afplay_pid() 
{
    FILE *fp;
    char command[1024];
    char output[1024];
    int pid = -1;

    strcpy(command, "pgrep afplay");
    fp = popen(command, "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        return -1;
    }

    while (fgets(output, sizeof(output), fp) != NULL) {
        pid = atoi(output);
        break;
    }

    pclose(fp);

    return (pid);
}

int play_music(char* sfx, t_game *game) 
{
    system(sfx);
    int pid = get_afplay_pid();
    if (pid != -1)
        game->music->background_pid = pid;
    return 0;
}

int    stop_music(t_game *game)
{
    char* pid_str = ft_itoa(game->music->background_pid);
    if (pid_str == NULL)
        return (0);
    char* killer = ft_strjoin("kill ", pid_str);
        if (killer == NULL)
        free(pid_str);
    system(killer);

    free(pid_str);
    free(killer);
    return (0);
}
