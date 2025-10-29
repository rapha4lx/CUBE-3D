/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showoff <showoff@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:05:56 by showoff           #+#    #+#             */
/*   Updated: 2025/10/29 15:05:56 by showoff          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"


void start_cube(t_cube *cube)
{
    cube->fd = -1;
    cube->lines = NULL;
    cube->map.map = NULL;
    cube->map.height = 0;
    cube->map.width = 0;
    cube->textures.north = NULL;
    cube->textures.south = NULL;
    cube->textures.weast = NULL;
    cube->textures.east = NULL;
    cube->textures.floor = NULL;
    cube->textures.ceiling = NULL;
}

void free_cube(t_cube *cube)
{
    if (cube->fd != -1)
        close(cube->fd);
    t_line_clear(&cube->lines);
    free_texture(&cube->textures);
}


