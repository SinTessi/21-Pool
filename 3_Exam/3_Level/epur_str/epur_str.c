/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:01:50 by wshela            #+#    #+#             */
/*   Updated: 2019/06/26 13:51:29 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur_str(char *str)
{
	int i;
	int p;

	i = 0;
	p = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (p == 1)
			{
				ft_putchar(' ');
				p = 0;
			}
			ft_putchar(str[i]);
		}
		if (str[i] == ' ' || str[i] == '\t')
			p = 1;
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_epur_str(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
