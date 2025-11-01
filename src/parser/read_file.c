/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showoff <showoff@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:05:50 by showoff           #+#    #+#             */
/*   Updated: 2025/10/31 18:27:57 by showoff          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube.h"



static int map_line(char *line, int *is_map)
{
    char **tmp;
    int i;
    int count;

    tmp = ft_split(line, ' ');
    if (!tmp)
        return (0);
    i = 0;
    count = 0;
    while (tmp[i])
    {
        if (tmp[i] >= '0' && tmp[i] <= '9')
            count++;
        i++;
    }
    if (count > 1)
        *is_map = 1;
    return (count);
}

int read_lines(t_line **lines, int fd)
{
    char *line;
    char *buff;
    int is_map;

    is_map = 0;
    if (fd == -1)
        return (0);
    line = get_next_line(fd);
    while (line)
    {
        if (line && line[0] != '\n')
        {
            buff = ft_strrchr(line, '\n');
            if (buff)
                *buff = '\0';
            t_line_add_back(lines, t_line_new(line));
        }
        else
            free(line);
        map_line(line, &is_map);
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
        ft_printf("%s\n", tmp->line);
        tmp = tmp->next;
    }
}

void free_and_set_null(char **ptr)
{
    if (!ptr || !*ptr)
        return ;
    free(*ptr);
    *ptr = NULL;
}

