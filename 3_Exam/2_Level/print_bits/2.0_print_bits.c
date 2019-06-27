/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.0_print_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:05:01 by wshela            #+#    #+#             */
/*   Updated: 2019/06/27 19:22:29 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (i & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}

int		main(void)
{
	print_bits(33);
	return (0);
}
