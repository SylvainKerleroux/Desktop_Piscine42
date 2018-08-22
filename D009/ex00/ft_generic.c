/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:05:18 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/09 17:31:58 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	char	*str;
	int		i;

	str = "Tut tut ; Tut tut";
	i = 0;
	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
	my_putchar('\n');
}
