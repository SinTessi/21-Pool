/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:58:52 by wshela            #+#    #+#             */
/*   Updated: 2019/06/24 16:07:49 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_bits(unsigned char octet)
{
	int str[8];
	int i;

	i = 0;
	while (i < 8)
	{
		str[i] = octet % 2;
		octet = octet / 2;
		i++;
	}
	while (i < 8)
	{
		str[i] = 0;
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(str[i] + '0');
		i--;
	}
}

int		main(void)
{
	unsigned char	octet;

	octet = 4;
	ft_print_bits(octet);
	return (0);
}
