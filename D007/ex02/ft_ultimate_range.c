/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:01:59 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/09 17:34:42 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*table;
	int		i;

	if (!(table = (int*)malloc(sizeof(int) * (max - min))) || min >= max)
		return (0);
	i = -1;
	while ((++i + min) < max)
	{
		table[i] = i + min;
	}
	*range = table;
	return (max - min);
}

int		main(void)
{
	int 	**table;
	int		i;

	ft_ultimate_range(table, 2, 6);

	printf("%d\n", table[0][0]);
	printf("%d\n", table[0][1]);
	printf("%d\n", table[0][2]);
	printf("%d\n", table[0][3]);
	printf("%d\n", table[0][4]);
	printf("%d\n", table[0][5]);
	return (0);
}
