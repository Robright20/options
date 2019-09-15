/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:47:08 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/15 21:59:00 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTION_H
# define OPTION_H
# include <unistd.h>
# include <stdio.h>
# define USAGE 1
# define INVALID 0

void	ft_puterror(int eno);
void	ft_putstr(char *s);
int		is_help(int ac, char *params);
int		is_alpha(char c);
#endif
