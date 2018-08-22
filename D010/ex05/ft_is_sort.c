/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 06:11:22 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/21 06:11:25 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_intcmp(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int		res;
	int		(*function)(int, int);
	int 	tab[] = {4 , 3, 6, 7, 9};

	function = &ft_intcmp;
	res = ft_is_sort(tab, 4, function);
	printf("%d\n", res);
	return 0;
}