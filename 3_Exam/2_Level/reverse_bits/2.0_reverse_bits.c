/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.0_reverse_bits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:23:20 by wshela            #+#    #+#             */
/*   Updated: 2019/06/27 20:07:58 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
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
		i >>= 1;
	}
	j--;
	while (j >= 0)
	{
int main(void)
{
	reverse_bits(33);
	return (0);
}
