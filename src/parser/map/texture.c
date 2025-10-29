/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showoff <showoff@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:05:54 by showoff           #+#    #+#             */
/*   Updated: 2025/10/29 16:03:44 by showoff          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cube.h"

int alloc_texture(t_texture *texture, char *line)
{
    if (!line || !line[0] || !line[1])
        return (0);
    if (line[0] == 'N' && line[1] == 'O')
        texture->north = ft_strdup(line + 2);
    else if (line[0] == 'S' && line[1] == 'O')
        texture->south = ft_strdup(line + 2);
    else if (line[0] == 'W' && line[1] == 'E')
        texture->weast = ft_strdup(line + 2);
    else if (line[0] == 'E' && line[1] == 'A')
        texture->east = ft_strdup(line + 2);
    else if (line[0] == 'F' && line[1] == ' ')
        texture->floor = ft_split(line + 2, ',');
    else if (line[0] == 'C' && line[1] == ' ')
        texture->ceiling = ft_split(line + 2, ',');
    else 
        return (0);
    return (1);
}

void free_texture(t_texture *texture)
{
    if (texture->north)
        free(texture->north);
    if (texture->south)
        free(texture->south);
    if (texture->weast)
        free(texture->weast);
    if (texture->east)
        free(texture->east);
    if (texture->floor)
        ft_free_split(texture->floor);
    if (texture->ceiling)
        ft_free_split(texture->ceiling);
}
