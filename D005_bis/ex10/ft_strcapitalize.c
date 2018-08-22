/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:29:37 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/07 11:50:23 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		start;
	int		count;

	start = 1;
	count = 0;
	while (str[count])
	{
		if ((str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a')
			|| str[count] > 'z')
			start = 1;
		if (!start && str[count] > 64 && str[count] < 91)
			str[count] += 32;
		if (start && str[count] > 96 && str[count] < 123)
		{
			str[count] -= 32;
			start = 0;
		}
		if (start && ((str[count] > 64 && str[count] < 91) 
			|| (str[count] <= '9' && str[count] >= '0')))
			start = 0;
		count++;
	}
	return (str);
}
