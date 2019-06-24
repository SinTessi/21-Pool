/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:58:52 by wshela            #+#    #+#             */
/*   Updated: 2019/06/25 01:11:12 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	char	str[8];
	int		i;
	char	res;

	i = 0;
	while (i < 8)
	{
		str[i] = octet % 2 + '0';
		octet = octet / 2;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}
