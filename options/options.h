/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:47:08 by fokrober          #+#    #+#             */
/*   Updated: 2019/09/16 01:41:27 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONS_H
# define OPTIONS_H
# include <unistd.h>
# include <stdio.h>
# define USAGE 1
# define INVALID 0

void	ft_puterror(int eno);
void	ft_putstr(char *s);
int		is_help(char *params);
int		is_alpha(char c);
int		check_params(int ac, char **av);
int		is_params(char *s);
void	print_options(char *options);
void	save_options(int ac, char **av);
void	ft_putchar(char c);
#endif
