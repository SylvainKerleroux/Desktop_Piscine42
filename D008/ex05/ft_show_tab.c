/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:47:19 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/14 17:47:22 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c)
{
	printf("%c", c);
}

void	my_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void 	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		j;

	i = 0;
	while (par[i].str)
	{
		my_putstr(par[i].copy);
		ft_putchar('\n');
		printf("%d", par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j])
		{
			my_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return ;
}