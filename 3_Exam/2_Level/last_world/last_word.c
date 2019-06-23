/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_world.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 21:16:34 by wshela            #+#    #+#             */
/*   Updated: 2019/06/23 22:56:27 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_last_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while ((str[i] == ' ' || str[i] == '	') && i >= 0)
		i--;
	if (i == -1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (str[i] != ' ' && str[i] != '	' && i != 0)
		i--;
	if (str[i] == ' ' || str[i] == '	')
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '	')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
