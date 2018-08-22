/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 15:06:23 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/06 19:44:42 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	if (nb >= 0 && nb < 10)
	{
		c = nb + '0';
		ft_putchar(c);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while (*str <= 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (str[0] == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
