/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 01:14:11 by wshela            #+#    #+#             */
/*   Updated: 2019/06/25 01:33:07 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[1][i])
	{
		j = 0;
		while (str[2][j])
		{
			if (str[2][j] == str[1][i])
				j++;
			else
			{
				ft_putchar(str[2][j]);
				j++;
			}
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av);
	else
		ft_putchar('\n');
	return (0);
}
