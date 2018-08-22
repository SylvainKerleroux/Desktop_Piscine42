/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 06:08:43 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/21 06:08:46 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*))
{
	int		any;
	int		count[3];

	count[0] = 0;
	count[2] = 0;
	while (tab[count[0]])
	{
		count[1] = 0;
		while (tab[count[0]][count[1]])
		{
			if (f(&tab[count[0]][count[1]]))
				count[2]++;
			count[1]++;
		}
		count[0]++;
	}
	return (count[2]);
}
