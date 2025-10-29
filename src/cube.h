#ifndef CUBE_H
#define CUBE_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "../imports/libft/libft.h"

typedef struct s_line
{
    char *line;
    struct s_line *next;
} t_line;

void t_line_add_back(t_line **lst, t_line *new);
t_line *t_line_new(char *line);
void t_line_clear(t_line **lst);

int read_lines(t_line **lines, int fd);
void print_lines(t_line *lines); // Remove before

typedef struct s_texture
{
    char *north;
    char *south;
    char *weast;
    char *east;

    char **floor;
    char **ceiling;
} t_texture;

int alloc_texture(t_texture *texture, char* line);
void free_texture(t_texture *texture);

typedef struct s_map
{
    int width;
    int height;
    char **map;
} t_map;

void alloc_map(t_map *map, char *line);

typedef struct s_cube
{
    int fd;
    t_line *lines;
    t_map map;
    t_texture textures;
} t_cube;

void start_cube(t_cube *cube);
void free_cube(t_cube *cube);


#endif // CUBE_