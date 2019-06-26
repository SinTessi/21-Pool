/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 22:56:03 by wshela            #+#    #+#             */
/*   Updated: 2019/06/26 23:47:22 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -neg;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * neg);
}

void	ft_putnbr(int nb)
{
	int k;

	k = 1;
	while (nb / k > 9)
		k = k * 10;
	while (k > 0)
	{
		ft_putchar(nb / k + '0');
		nb = nb % k;
		k = k / 10;
	}
}

void	ft_tab_mult(int nb)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(i * nb);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	int nb;

	if (ac != 2)
		ft_putchar('\n');
	else
	{
		nb = ft_atoi(av[1]);
		ft_tab_mult(nb);
	}
	return (0);
}
