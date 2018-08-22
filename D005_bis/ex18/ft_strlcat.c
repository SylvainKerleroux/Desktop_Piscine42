/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 23:17:23 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/08 01:00:55 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		main(void)
{
//	unsigned int	size;
	char			str[100] = "Hello";
	char			dest[100] = "World";
	unsigned int	res;

	
	res = strlcat(dest, str, 5);
	printf("%u \n, %s \n, %s\n", res, dest, str);
	return (0);
}
