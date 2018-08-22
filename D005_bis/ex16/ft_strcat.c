/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:00:43 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/07 19:58:58 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int len;

	i = -1;
	j = 0;
	len = ft_strlen(dest);
	while (dest[++i])
	{
		dest[i + len] = src[j++];
	}
	dest[j] = '\0';
	return (dest);
}
