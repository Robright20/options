/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:50:49 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/15 21:51:06 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	ft_puterror(int eno)
{
	if (eno)
		ft_putstr("options: abcdefghijklmnopqrstuvwxyz");
	else
		ft_putstr("Invalid Option");
}

int		is_help(int ac, char *params)
{
	int		len;

	len = 0;
	if (ac == 2)
	{
		while (params[len])
			len++;
	}
	return (len == 2 && (params[0] == '-' && params[1]));
}
