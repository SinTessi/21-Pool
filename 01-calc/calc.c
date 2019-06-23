/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:34:20 by wshela            #+#    #+#             */
/*   Updated: 2019/06/23 15:49:20 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		ft_result(int sr1, int zn, int sr2)
{
	int		res;

	if (zn == 1)
		res = sr1 * sr2;
	if (zn == 2)
		res = sr1 / sr2;
	if (zn == 3)
		res = sr1 % sr2;
	if (zn == 4)
		res = sr1 + sr2;
	if (zn == 5)
		res = sr1 - sr2;
	return (res);
}

int		ft_znak(char *str)
{
	int		zn;

	if (str[0] == '*')
		zn = 1;
	if (str[0] == '/')
		zn = 2;
	if (str[0] == '%')
		zn = 3;
	if (str[0] == '+')
		zn = 4;
	if (str[0] == '-')
		zn = 5;
	return (zn);
}

void	ft_calc(int i, char **av)
{
	int		sr1;
	int		sr2;
	int		zn;
	int		res;

	i = 3;
	while (i >= 1)
	{
		if (i == 3)
			sr2 = ft_atoi(av[i]);
		if (i == 2)
			zn = ft_znak(av[i]);
		if (i == 1)
			sr1 = ft_atoi(av[i]);
		i--;
	}
	res = ft_result(sr1, zn, sr2);
	ft_putnbr(res);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] != '+' && av[2][0] != '-'
				&& av[2][0] != '*' && av[2][0] != '/' && av[2][0] != '%')
			ft_putstr("Использован несуществующий знак");
		else
			ft_calc(ac, av);
	}
	else
		ft_putstr("Ты что-то забыл");
	return (0);
}
