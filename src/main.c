/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showoff <showoff@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:05:49 by showoff           #+#    #+#             */
/*   Updated: 2025/10/29 16:00:56 by showoff          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

#define MSG(format, ...) ft_printf("[!] " format "\n", __VA_ARGS__ )

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        write(1, "Missing map argument!\n", 23);
        return (0);
    }

    t_cube cube;
    start_cube(&cube);

    MSG("Map name: %s", argv[1]);
    
    cube.fd = open(argv[1], O_RDONLY);
    MSG("Map fd: %d", cube.fd);
    if (read_lines(&cube.lines, cube.fd) == 0)
        return (0);
    
    if (parser(cube.lines, &cube.map, &cube.textures) == 0)
        return (free_cube(&cube), 0);
    
    free_cube(&cube);
    return (0);
}
