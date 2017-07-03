/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:37:17 by rhaque            #+#    #+#             */
/*   Updated: 2017/07/01 18:37:20 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = libft.a

SRCS = *.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f ft_*.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all