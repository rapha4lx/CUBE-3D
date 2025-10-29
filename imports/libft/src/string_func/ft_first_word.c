/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:33:22 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/24 19:28:33 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_first_word(char *str)
{
	char	*start;

	if (!str)
		return (str);
	while (str && (*str <= 32))
		str++;
	start = str;
	while (str && !(*str <= 32))
		str++;
	if (str == NULL)
		return (ft_substr(start, 0, ft_strlen(start)));
	return (ft_substr(start, 0, str - start));
}
