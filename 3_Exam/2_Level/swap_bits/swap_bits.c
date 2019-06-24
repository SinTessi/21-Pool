/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:58:52 by wshela            #+#    #+#             */
/*   Updated: 2019/06/25 01:09:31 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	char	str[8];
	int		i;

	i = 0;
	while (i < 8)
	{
		str[i] = octet % 2 + '0';
		octet = octet / 2;
		i++;
	}
	i = 4;
	while (i < 8)
	{
		write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
