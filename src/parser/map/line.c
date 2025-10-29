/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: showoff <showoff@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:05:44 by showoff           #+#    #+#             */
/*   Updated: 2025/10/29 15:05:45 by showoff          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cube.h"

void t_line_add_back(t_line **lst, t_line *new)
{
    t_line *tmp;

    if (!lst || !*lst)
    {
        *lst = new;
        return ;
    }
    tmp = *lst;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
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

void t_line_clear(t_line **lst)
{
    t_line *tmp;

    if (!lst)
        return ;
    tmp = *lst;
    while (tmp)
    {
        *lst = tmp->next;
        free(tmp->line);
        free(tmp);
        tmp = *lst;
    }
    *lst = NULL;
}
