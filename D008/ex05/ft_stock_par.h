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

#ifndef FT_STOCK_PAR_H
#define FT_STOCK_PAR_H

#include <stdlib.h>

typedef struct s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

char	*ft_strdup(char *str);
char	**ft_split_whitespaces(char *str);
void 	ft_show_tab(struct s_stock_par *par);
struct s_stock_par *ft_param_to_tab(int ac, char **av);

#endif