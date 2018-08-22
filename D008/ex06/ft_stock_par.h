/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:01:10 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/14 15:01:13 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STOCK_PAR_H__
#define __FT_STOCK_PAR_H__

#include <stdlib.h>

typedef struct s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

void	ft_putchar(char c);
void 	ft_show_tab(struct s_stock_par *par);

#endif