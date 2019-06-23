/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_world.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 21:16:34 by wshela            #+#    #+#             */
/*   Updated: 2019/06/23 21:20:22 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word
int		main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
