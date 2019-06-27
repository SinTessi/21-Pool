/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 02:56:59 by wshela            #+#    #+#             */
/*   Updated: 2019/06/27 15:08:42 by wshela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *str)
{
	int		i;
	int		k;
	char *copy;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	k = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		i++;
	k = i - k;
	copy = malloc(sizeof(char) * (k + 1));
	if (copy == NULL)
		return (0);
	i--;
	copy[k] = '\0';
	k--;
	while (k >= 0)
	{
		copy[k] = str[i];
		i--;
		k--;
	}
	return (copy);
}

int		ft_first(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != ' ' && str[i] != '\t')
		i++;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

void	ft_rostring(char *str)
{
	int	i;
	int	t;
	char	*first;

	i = 0;
	t = 0;
	first = ft_strcpy(str);
	i = ft_first(i, str);
	if (!(str[i]))
	{
		ft_putstr(first);
		return ;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == 't')
			t = 1;
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (t == 1)
				ft_putchar(' ');
			t = 0;
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar(' ');
	i = 0;
	while (first[i])
	{
		ft_putchar(first[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_rostring(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
