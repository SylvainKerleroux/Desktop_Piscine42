/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 01:03:37 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/10 01:03:44 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_len(char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);

}

char	*ft_concat_params(int argc, char **argv)
{
	unsigned long	args_len;
	int				i;
	int				j;
	int				k;
	char			*dest;

	i = 1;
	args_len = 0;
	while (argv[i])
	{
		args_len += ft_len(argv[i]) + 1;
		i++;
	}
	if (!(dest = (char*)malloc(args_len + 1)))
		return (0);
	i = 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			dest[k] = argv[i][j];
			j++;
			k++;
		}
		dest[k] = '\n';
		i++;
		k++;
		
	}
	dest[k] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	int		ar;
	int		i;
	char	*res;

	i = 0;
	ar = argc;
	res = ft_concat_params(argc, argv);
	printf("%s", res);
	return (0);
}
