/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:16:38 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/07 11:35:00 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 65 && str[count] <= 90)
			str[count] += 32;
		count++;
	}
	return (str);
}
