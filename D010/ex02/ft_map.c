/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 04:15:01 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/21 04:15:04 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*res;
	int		i;

	if (!(res = (int*)malloc(sizeof(int) * length)))
		return (0);
	res[length] = 0;
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

int		ft_plus(int nbr)
{
	return (nbr + 1);
}

int		main(void)
{
	int		(*f)(int);
	int		table[] = {0, 1 , 2, 3, 4};
	int		*res;
	int		i;

	f = &ft_plus;
	res = ft_map(table, 5, f);
	i = 0;
	while (i < 5)
	{
		printf("Origin : %d, Res : %d\n", table[i], res[i]);
		i++;
	}
	return (0);
}