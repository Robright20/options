/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:50:49 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/16 02:46:16 by fokrober         ###   ########.fr       */
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

int		is_params(char *s)
{
	int		rep;

	rep = 1;
	if (!s || !*s || *s++ != '-')
		return (0);
	while (1)
	{
		rep *= is_alpha(*s);
		if (!*s || !*(++s))
			break ;
	}
	return (rep);
}
