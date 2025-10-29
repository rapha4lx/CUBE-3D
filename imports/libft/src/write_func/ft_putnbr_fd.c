/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:20:31 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:22 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

static int	number_count(int n, long int *i)
{
	int			count;
	long int	number;

	count = 0;
	number = n;
	if (n == 0)
		return (1);
	if (number < 0)
	{
		count++;
		number = -number;
	}
	*i = number;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long int	i;
	char		*buff;
	int			buff_size;
	int			count;

	i = 0;
	buff_size = number_count(n, &i);
	count = 0;
	if (i == 0)
		return (ft_putchar(48));
	buff = (char *)malloc(sizeof(char) * buff_size + 1);
	if (buff == NULL)
		return (0);
	while (i != 0)
	{
		buff[buff_size - 1 - count] = (i % 10) + 48;
		count++;
		i /= 10;
	}
	if (n < 0)
		buff[0] = '-';
	buff[buff_size] = '\0';
	ft_putstr(buff);
	free(buff);
	return (buff_size);
}
