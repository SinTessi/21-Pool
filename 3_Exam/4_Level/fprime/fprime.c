/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 00:01:39 by wshela            #+#    #+#             */
/*   Updated: 2019/06/27 02:01:19 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int nb)
{
	int del;

	del = 2;
	if (nb == 1)
		printf("1");
	if (nb == 0)
		return ;
	while (nb > 1)
	{
		if (nb % del == 0)
		{
			printf("%d", del);
			if (nb == del)
				return ;
			printf("*");
			nb = nb / del;
			del = 2;
		}
		else
			del++;
	}
}

int		main(int ac, char **av)
{
	int nb;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		ft_fprime(nb);
	}
	else
		printf("\n");
	return (0);
}
