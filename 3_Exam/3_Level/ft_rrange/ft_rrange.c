/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:52:56 by wshela            #+#    #+#             */
/*   Updated: 2019/06/26 16:13:57 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_plus(int start, int end)
{
	int i;
	int *str;

	i = 0;
	str = malloc(sizeof(int) * (end - start + 1));
	while (end >= start)
	{
		str[i] = end--;
		i++;
	}
	return (str);
}

int		*ft_minus(int start, int end)
{
	int i;
	int *str;

	i = 0;
	str = malloc(sizeof(int) * (start - end + 1));
	while (end <= start)
	{
		str[i] = end++;
		i++;
	}
	return (str);
}

int		*ft_rrange(int start, int end)
{
	int i;
	int *str;

	i = 0;
	if (start == end)
	{
		str = malloc(sizeof(int) * 1);
		str[0] = end;
	}
	else if (start < end)
		str = ft_plus(start, end);
	else
		str = ft_minus(start, end);
	return (str);
}
/*
int		main(void)
{
	int start;
	int end;

	start = 1;
	end = 5;
	ft_rrange(start, end);
	return (0);
}*/
