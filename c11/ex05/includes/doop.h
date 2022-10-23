/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:32:08 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/12 14:44:09 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

int		ft_is_vaild(char *op);
int		positioning(int a, char op, int b);
int		atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		add(int a, int b);
int		min(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
#endif
