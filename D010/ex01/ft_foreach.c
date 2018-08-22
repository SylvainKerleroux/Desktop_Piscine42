/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 03:58:44 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/21 03:58:50 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	printf("%c\n", c);
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

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
	}
}

int		main()
{
	void	(*f)(int);
	int		table[] = {0, 1 , 2, 3, 4};

	f = &ft_putnbr;
	ft_foreach(table, 5, f);
	return (0);
}