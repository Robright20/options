/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:49:39 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/16 01:22:44 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

int		main(int ac, char **av)
{
	if (ac > 1 && !is_help(av[1]))
	{
		if (check_params(ac, av))
			save_options(ac, av);
	}
	else
		ft_puterror(USAGE);
	return (0);
}
