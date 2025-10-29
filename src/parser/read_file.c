#include "../cube.h"

int read_lines(t_line *lines, int fd)
{
    char *line;

    if (fd == -1)
        return (0);
    line = get_next_line(fd);
    while (!line)
    {
        t_line_add_back(&lines, t_line_new(line));
        line = get_next_line(fd);
    }
    return 1;
}


void print_lines(t_line *lines)
{
    t_line *tmp;

    tmp = lines;
    while (tmp)
    {
        ft_printf("%s", tmp->line);
        tmp = tmp->next;
    }
}

