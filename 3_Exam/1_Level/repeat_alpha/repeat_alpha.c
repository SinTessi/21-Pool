/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 18:42:16 by wshela            #+#    #+#             */
/*   Updated: 2019/06/23 19:46:14 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha(char *str)
{
	int		i;
	int		pvt;

	i = 0;
	while (str[i])
	{
		pvt = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
			pvt = str[i] - 64;
		if (str[i] >= 'a' && str[i] <= 'z')
			pvt = str[i] - 96;
		else
			ft_putchar(str[i]);
		while (pvt > 0)
		{
			ft_putchar(str[i]);
			pvt--;
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_alpha(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
