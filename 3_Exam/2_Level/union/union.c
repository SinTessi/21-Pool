/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 01:14:11 by wshela            #+#    #+#             */
/*   Updated: 2019/06/25 14:44:00 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_test(char *str, int *ai)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ai[str[i]] == 0)
		{
			ft_putchar(str[i]);
			ai[str[i]] = 1;
			i++;
		}
		else
			i++;
	}
}

void	ft_union(char **str)
{
	int	ai[128];
	int i;

	i = 0;
	while (i < 128)
	{
		ai[i] = 0;
		i++;
	}
	ft_test(str[1], ai);
	ft_test(str[2], ai);
	ft_putchar('\n');
}
