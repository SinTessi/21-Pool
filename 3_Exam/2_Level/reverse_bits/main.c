/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 23:29:54 by wshela            #+#    #+#             */
/*   Updated: 2019/06/25 00:39:03 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet);

int	main(void)
{
	unsigned char	octet;

	octet = 2;
	reverse_bits(octet);
	return (0);
}
