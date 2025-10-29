#include "../cube.h"

int load_textures(t_line *lines, t_texture *textures)
{
    (void)lines;
    (void)textures;
    return (1);
}

int parser(t_line *lines, t_map *map, t_texture *textures)
{
    t_line *tmp;

    (void)map;
    (void)textures;
    tmp = lines;
    while (tmp)
    {
        if (alloc_texture(textures, tmp->line) == 0)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

