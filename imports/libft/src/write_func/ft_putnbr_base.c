/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:26:02 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:22 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	number_count(unsigned long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_putnbr_base(unsigned long int n, char *base)
{
	char	*buff;
	int		buff_size;
	int		count;

	buff_size = number_count(n);
	count = 0;
	if (n == 0)
		return (ft_putchar(48));
	buff = (char *)malloc(sizeof(char) * buff_size + 1);
	if (buff == NULL)
		return (0);
	while (n != 0)
	{
		buff[buff_size - 1 - count] = base[(n % 16)];
		count++;
		n /= 16;
	}
	buff[buff_size] = '\0';
	ft_putstr(buff);
	free(buff);
	return (buff_size);
}
