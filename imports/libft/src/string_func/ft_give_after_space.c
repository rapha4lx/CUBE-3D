/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_give_after_space.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:21:38 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/24 21:00:18 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_give_after_space(char *argv)
{
	while (argv && *argv > 0)
	{
		if (*argv > 32)
			return (argv);
		if (*argv <= 32)
			argv++;
	}
	return (argv);
}
