/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 23:29:54 by wshela            #+#    #+#             */
/*   Updated: 2019/06/24 23:53:21 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(unsigned char octet);

int		main(void)
{
	unsigned char octet;

	octet = 2;
	print_bits(octet);
	return (0);
}