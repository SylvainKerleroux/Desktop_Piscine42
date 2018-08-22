/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skerlero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:48:28 by skerlero          #+#    #+#             */
/*   Updated: 2018/08/14 10:48:30 by skerlero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have and even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(x) (x % 2 ? 0 : 1)
# define SUCCESS 0

#endif
