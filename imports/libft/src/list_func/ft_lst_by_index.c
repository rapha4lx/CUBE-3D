/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_by_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:17:09 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:23 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lst_by_index(t_list *lst, int index)
{
	int	count;

	count = 0;
	while (count < index)
	{
		lst = lst->next;
		count++;
	}
	return (lst);
}
