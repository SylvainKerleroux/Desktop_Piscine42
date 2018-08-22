/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 04:54:21 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/07 05:27:57 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
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

int		main(int argc, char **argv)
{
	(void)argc;
	printf("Self result  : %d\n", ft_strcmp(argv[1], argv[2]));
	printf("Normal result : %d\n", strcmp(argv[1], argv[2]));
}