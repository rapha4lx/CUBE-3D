/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:21:12 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:23 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_free_split(char **buffer)
{
	int	it;

	if (!buffer)
		return ;
	it = 0;
	while (buffer[it] != NULL)
	{
		free(buffer[it]);
		it++;
	}
	free(buffer);
}
