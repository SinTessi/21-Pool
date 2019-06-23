/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 20:40:10 by wshela            #+#    #+#             */
/*   Updated: 2019/06/23 21:03:22 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_znak(char *str)
{
	int zn;

	if (str[0] == '+')
		zn = 1;
	if (str[0] == '-')
		zn = 2;
	if (str[0] == '*')
		zn = 3;
	if (str[0] == '/')
		zn = 4;
	if (str[0] == '%')
		zn = 5;
	return (zn);
}

int		ft_res(int sr1, int zn, int sr2)
{
	int res;

	if (zn == 1)
		res = sr1 + sr2;
	if (zn == 2)
		res = sr1 - sr2;
	if (zn == 3)
		res = sr1 * sr2;
	if (zn == 4)
		res = sr1 / sr2;
	if (zn == 5)
		res = sr1 % sr2;
	return (res);
}

void	ft_do_op(int ac, char **av)
{
	int sr1;
	int sr2;
	int zn;
	int res;

	while (ac > 1)
	{
		if (ac == 4)
			sr2 = atoi(av[3]);
		if (ac == 3)
			zn = ft_znak(av[2]);
		if (ac == 2)
			sr1 = atoi(av[1]);
		ac--;
	}
	res = ft_res(sr1, zn, sr2);
	printf("%d\n", res);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		ft_do_op(ac, av);
	else
		ft_putchar('\n');
	return (0);
}
