/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.0_reverse_bits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 20:18:05 by wshela            #+#    #+#             */
/*   Updated: 2019/06/27 20:43:41 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	res;

	i = 0;
	while (i < 8)
	{
		res = res * 2 + octet % 2;
		octet = octet / 2;
		i++;
	}
	return (res);
}

int		main(void)
{
	unsigned char	octet;

	octet = 'a';
	printf("%d", reverse_bits(octet));
	return (0);
}
