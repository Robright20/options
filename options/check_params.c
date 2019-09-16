/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:02:53 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/16 02:46:14 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

int		check_params(int ac, char **av)
{
	int		i;
	int		help;

	i = 1;
	help = 1;
	while (i < ac)
	{
		if (!is_params(av[i]) && av[i][0] == '-')
		{
			ft_puterror(INVALID);
			return (0);
		}
		else if (is_help(av[i++]))
			help = 0;
	}
	if (!help)
		ft_puterror(USAGE);
	return (help);
}
