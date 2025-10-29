#include "cube.h"

void t_line_add_back(t_line **lst, t_line *new)
{

}

t_line *t_line_new(char *line)
{
    t_line *new;

    new = malloc(sizeof(t_line));
    if (!new)
        return (NULL);
    new->line = line;
    new->next = NULL;
    return (new);
}

