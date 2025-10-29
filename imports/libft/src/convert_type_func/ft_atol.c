/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:03:10 by rferro-d          #+#    #+#             */
/*   Updated: 2025/01/06 16:06:12 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atol(const char *nptr)
{
	int		sing;
	long	i;

	sing = 1;
	i = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\f' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\r')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sing = -1;
		nptr++;
	}
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		i = (i * 10) + (*nptr - '0');
		nptr++;
	}
	return (i * sing);
}
