/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:49:39 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/15 23:09:43 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

int		main(int ac, char **av)
{
	if (ac > 1 && !is_help(av[1]))
	{
		printf("check_params %d\n", check_params(ac, av));
	}
	else
		ft_puterror(USAGE);
	return (0);
}
