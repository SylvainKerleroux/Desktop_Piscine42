/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:43:27 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/09 17:50:06 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	to_12h(int hour)
{
	int		h;

	h = hour;
	if (h > 12 && h < 24)
		h -= 12;
	if (h == 24)
		h = 12;
	if (h == 0)
		h = 12;
	return (h);
}

char	*to_ampm(int hour)
{
	char	*str;
	if (hour >= 12 && hour != 24)
		return ("P.M");
	else
		return ("A.M");
}

void	ft_takes_place(int hour)
{
	char	*str;
	char	*str2;
	int		hour2;
	int		hour1;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	str = "A.M";
	str2 = "A.M";
	hour1 = hour; 
	hour2 = hour + 1;
	str = to_ampm(hour);
	str2 = to_ampm(hour2);
	hour1 = to_12h(hour1);
	printf("%d.00 %s and ", hour1, str);
	hour2 = to_12h(hour2);
	printf("%d.00 %s\n", hour2, str2);
}

int		main()
{
	ft_takes_place(23);
	return (0);
}
