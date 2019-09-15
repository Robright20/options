/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:49:39 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/15 22:28:40 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

int		main(int ac, char **av)
{
	if (ac > 1 && !is_help(av[1]))
	{
		printf("is_params %d\n", is_params(av[1]));
	}
	else
		ft_puterror(USAGE);
	return (0);
}
