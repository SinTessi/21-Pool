/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 17:44:33 by wshela            #+#    #+#             */
/*   Updated: 2019/06/22 20:15:09 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		i;
	int		del;

	i = 0;
	del = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb / del > 9)
		del = del * 10;
	while (del > 0)
	{
		ft_putchar(nb / del + '0');
		nb = nb % del;
		del = del / 10;
	}
	ft_putchar('\n');
}
