/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_at_next_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:09:54 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/24 21:22:23 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_at_next_char(char *str, char c)
{
	int	count;

	count = 0;
	while (str && str[count])
	{
		if (str[count] == c)
			return (count);
		count++;
	}
	return (count);
}
