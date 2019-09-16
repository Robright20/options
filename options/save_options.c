/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_options.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 00:16:02 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/16 01:49:48 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

void	save_options(int ac, char **av)
{
	static char	options[32];
	int			i;
	int			j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (av[i][j])
		{
			options[(int)av[i][j] - 97] = 1;
			j++;
		}
		i++;
	}
	print_options(options);
}

void	print_options(char *options)
{
	int		i;

	i = 32;
	while (--i)
	{
		ft_putchar(48 + options[i]);
		if (!(i % 8))
			ft_putchar(' ');
	}
	ft_putchar(48 + options[i]);
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
