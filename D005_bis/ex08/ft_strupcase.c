/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:02:12 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/07 11:35:20 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] -= 32;
		count++;
	}
	return (str);
}
