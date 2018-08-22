/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 01:09:25 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/10 01:09:45 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putchar(char c)
{
	printf("%c", c);
}

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab)
{
	int		x;
	int		y;

	printf("yo\n");
	x = 0;
	while ( x < 2)
	{
		y = 0;
		while (tab[x][y])
		{
			ft_putchar(tab[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		main(int argc, char **argv)
{
	char	**table;

	(void)argc;
	printf("Yo\n");
	table = ft_split_whitespaces(argv[1]);
	printf("mam\n");
	ft_print_words_tables(table);
	return 0;
}
