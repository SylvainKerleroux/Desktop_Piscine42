/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:08:34 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/09 14:08:51 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;
	int		j;

	if (!(range = (int*)malloc(sizeof(int) * (max - min) + 1) || min >= max)
		return (0);
	i = min;
	j = 0;
	while (i < max)
	{
		range[j] = i;
		j++;
		i++;
	}
	range[j] = '\0';
	return (range);
}

int		main(int argc, char **argv)
{
	int		*table;
	int		i;

	(void)argc;
	i = 0;
	table = ft_range(-1, 4);
	while (i < 3)
	{
		printf("%d\n", table[i]);
		i++;
	}
	return 0;
}