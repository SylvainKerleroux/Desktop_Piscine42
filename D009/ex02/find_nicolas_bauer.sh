# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skerlero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 19:19:05 by skerlero          #+#    #+#              #
#    Updated: 2018/08/09 21:13:47 by skerlero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat contacts_hard.txt | grep --ignore-case bauer | grep --ignore-case nicolas | grep -v --ignore-case bomber | grep aol | rev | awk -F ' ' '{print $2}' | rev
