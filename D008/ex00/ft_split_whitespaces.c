/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 01:10:07 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/10 01:10:32 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *point)
{
	int i[3];

	i[0] = 0;
	i[2] = 0;
	i[1] = 0;
	while (point[i[0]] != '\0')
	{
		if (point[i[0]] == 32 || point[i[0]] == '\t' || point[i[0]] == '\n')
		{
			i[0]++;
			i[1] = 0;
		}
		if (point[i[0]] != '\0' && point[i[0]] != 32
				&& point[i[0]] != '\t' && point[i[0]] != '\n' && i[1] == 0)
		{
			i[0]++;
			i[2]++;
			i[1]++;
		}
		else
		{
			i[0]++;
		}
	}
	return (i[2]);
}

int		ft_count_letters(char *point, int i)
{
	while (point[i] != '\0')
	{
		if (point[i] == 32 || point[i] == '\t' || point[i] == '\n')
		{
			return (i);
		}
		i++;
	}
	return (i);
}

char	*ft_assign(char *point, int k, char *tab)
{
	int i;

	i = 0;
	while (point[k] != '\0' && point[k] != '\n'
			&& point[k] != '\t' && point[k] != 32)
	{
		tab[i] = point[k];
		i++;
		k++;
	}
	tab[i] = '\0';
	return (&tab[i]);
}

char	**ft_trancript(char *point, char **tab)
{
	int i[2];
	int count;

	count = 0;
	i[0] = 0;
	i[1] = 0;
	while (point[i[1]] != '\0')
	{
		if (point[i[1]] != '\0' && point[i[1]] != 32
				&& point[i[1]] != '\t' && point[i[1]] != '\n' && count == 0)
		{
			count = (ft_count_letters(point, i[1]) - i[1]);
			tab[i[0]] = (char*)malloc(sizeof(char) * (count + 1));
			ft_assign(point, i[1], tab[i[0]]);
			i[0]++;
			count++;
		}
		if ((point[i[1]] != '\0') && (point[i[1]] == 32
					|| point[i[1]] == '\t' || point[i[1]] == '\n'))
			count = 0;
		i[1]++;
	}
	tab[i[0]] = (char*)malloc(sizeof(char) * 1);
	tab[i[0]] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	*point;
	int		count;
	char	**tab;

	point = str;
	count = ft_count_words(point);
	tab = (char**)malloc(sizeof(char*) * (count + 1));
	tab = ft_trancript(point, tab);
	return (tab);
}

