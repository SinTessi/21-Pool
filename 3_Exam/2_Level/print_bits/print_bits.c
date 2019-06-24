/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:58:52 by wshela            #+#    #+#             */
/*   Updated: 2019/06/24 23:53:47 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		str[8];
	int		i;
	char	res;

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
		res = str[i] + '0';
		write(1, &res, 1);
		i--;
	}
}
