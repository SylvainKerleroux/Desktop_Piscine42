# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skerlero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/08 13:18:04 by skerlero          #+#    #+#              #
#    Updated: 2018/08/08 13:24:14 by skerlero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c && ar -rc libft.a *.o && rm *.o 