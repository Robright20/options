/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:50:49 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/15 22:13:16 by fokrober         ###   ########.fr       */
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

int		is_help(char *params)
{
	int		len;

	len = 0;
	while (*params)
	{
		if (*params++ == 'h')
			len++;
	}
	return (len);
}

int		is_alpha(char c)
{
	return (c >= 97 && c <= 122);
}
