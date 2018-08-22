/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 06:54:09 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/21 06:54:11 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		add(int a, int b);
int		substract(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);

typedef int	(*t_function)(int, int);

t_function		build_table(void)
{
	int		(*function[4])(int, int);

	function[0] = &add;
	function[1] = &substract;
	function[2] = &multiply;
	function[3] = &divide;

	return (function);
}

int				main(int argc, char **argv)
{	
	int		(*function_ptr[4])(int, int);

	function_ptr = build_table();

	printf("%d\n", function[0](3, 3));
	if (argc < 3)
		return (0); 
	return (0);
}