/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:00:56 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/14 15:00:59 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		my_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

t_stock_par *build_structure(char *arg)
{
	static t_stock_par arg_stock;
	int		len;

	len = 0;
	while (arg[len])
		len++;
	return (&arg_stock);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	int				i;
	static t_stock_par		*table;

	if (!(table = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		table[i].size_param = my_strlen(av[i]);
		table[i].str = av[i];
		table[i].copy = ft_strdup(av[i]);
		table[i].tab = ft_split_whitespaces(av[i]); 
		i++;
	}
	table[i].str = 0;
	return (table);
}

int		main(int argc, char **argv)
{
	struct s_stock_par	*res;

	(void)argc;
	res = ft_param_to_tab(argc, argv);
	ft_show_tab(res);

	return (0);
}