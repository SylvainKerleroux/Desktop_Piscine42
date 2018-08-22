/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:28:46 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/09 12:28:49 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);

}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;
	int		i;
	
	src_len = ft_len(src);
	if ((dest = (char*)malloc(sizeof(char) * (src_len + 1))))
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;		
		}
	}
	dest[i] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	char 	*dest;

	(void)argc;
	dest = ft_strdup(argv[1]);
	printf("%s", dest);
	return (0);
}
