/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:29:23 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/08 17:53:15 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		my_strcmp(char *s1, char *s2)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			res += s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	return (res);
}

void	print_multi_args(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		res;
	char	*temp;

	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			res = my_strcmp(argv[i], argv[i + 1]);
			if (res > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	print_multi_args(argv);
	return (0);
}
