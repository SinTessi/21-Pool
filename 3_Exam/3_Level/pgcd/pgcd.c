/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:15:31 by wshela            #+#    #+#             */
/*   Updated: 2019/06/26 17:25:17 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_pgcd(int a, int b)
{
	int min;
	int i;
	int del;

	i = 1;
	del = 1;
	if (a == 0 || b == 0)
	{
		printf("\n");
		return ;
	}
	if (a < b)
		min = a;
	else
		min = b;
	while (i <= min)
	{
		if (a % i == 0 && b % i == 0)
			del = i;
		i++;
	}
	printf("%d\n", del);
}

int		main(int ac, char **av)
{
	int a;
	int b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		ft_pgcd(a, b);
	}
	else
		printf("\n");
	return (0);
}
