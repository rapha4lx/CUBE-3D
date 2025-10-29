/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:36:35 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:22 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	return (last);
}
