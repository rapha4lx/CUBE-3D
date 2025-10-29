#ifndef CUBE_H
#define CUBE_H

#include <stdio.h>
#include <unistd.h>


typedef struct s_line
{
    char *line;
    struct s_line *next;
} t_line;

void t_line_add_back(t_line **lst, t_line *new);
t_line *t_line_new(char *line);
void t_line_clear(t_line **lst);


typedef struct s_map
{
    int width;
    int height;
    char **map;
} t_map;



typedef struct s_texture
{
    char *north;
    char *south;
    char *weast;
    char *east;

    char **floor;
    char **ceiling;
} t_texture;

typedef struct s_cube
{
    int fd;
    t_line *lines;
    t_map map;
    t_texture textures;
    

} t_cube;

#endif // CUBE_