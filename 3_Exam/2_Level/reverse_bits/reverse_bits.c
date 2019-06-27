/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:58:52 by wshela            #+#    #+#             */
/*   Updated: 2019/06/27 18:33:09 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	char	str[8];
	int		i;
	int k;
	int res;
	int n;

	i = 7;
	k = 2;
	res = 0;
	while (i >= 0)
	{
		str[i] = octet % 2 + '0';
		octet = octet / 2;
		i--;
	}
	i = 0;
	while (i < 8)
	{
		n = 7 - i;
		k = 2;
		if (str[i] == '0')
			i++;
		else
		{
			while (i == 7)
				k = 1;
			while (n > 1)
			{
				k = k * 2;
				n--;
			}
			res = res + k;
			i++;
		}
	}
	return (res);
}
