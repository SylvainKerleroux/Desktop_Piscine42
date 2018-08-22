/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 04:26:39 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/21 04:26:42 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		any;
	int		count[2];

	count[0] = 0;
	while (tab[count[0]])
	{
		count[1] = 0;
		while (tab[count[0]][count[1]])
		{
			if (f(&tab[count[0]][count[1]]))
				return (1);
			count[1]++;
		}
		count[0]++;
	}
	return (0);
}

int		if_1(char *str)
{
	while (*str)
	{
		if (*str == '1')
			return (1);
		str++;
	}
	return (0);
}

int		main(int argc, char **args)
{
	int		(*function)(char*);
	int		res;

	function = &if_1;
	res = ft_any(args, function);
	printf("%d\n", res);
	return 0;
}