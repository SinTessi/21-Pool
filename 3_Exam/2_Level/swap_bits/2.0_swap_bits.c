/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.0_swap_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 20:44:22 by wshela            #+#    #+#             */
/*   Updated: 2019/06/27 23:54:55 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_swp(int str)
{
	int i;
	int j;
	int rev[8];

	i = 4;
	j = 0;
	while (i < 8)
	{
		rev[j] = str[i];
		i++;
		j++;
	}
	i = 0;
	while (i < 4)
	{
		rev[j] = str[i];
		i++;
		j++;
	}
	return (rev);
}

int		*ft_massive(unsigned char octet)
{
	int i;
	int j;
	int p;
	int str[8];

	i = 128;
	j = 0;
	while (i > 0)
	{
		if (i & octet)
			p = 1;
		else
			p = 0;
		str[j] = p;
		j++;
	}
	return (str);
}

int		ft_result(rev)
{
	int i;
	int res;
	int r;
	int k;

	i = 0;
	while (i < 8)
	{
		r = 2;
		k = 7 - i;
		if (rev[i] != 0)
		{
			while (k > 0)
				r = r * 2;
			res = res + r;
		}
		i++;
	}
	return (res);
}

unsigned char	swap_bits(unsigned char octet)
{
	int str[8];
	int rev[8];
	int res;

	str = ft_massive(octet);
	rev = ft_swp(str);
	res = ft_result(rev);
	return (rev);
}

int		main(void)
{
	printf("%d", swap_bits(54));
	return (0);
}
