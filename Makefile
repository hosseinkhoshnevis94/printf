# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: hkhoshne <hkhoshne@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2025/06/19 12:17:44 by hkhoshne      #+#    #+#                  #
#    Updated: 2025/06/19 12:17:44 by hkhoshne      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_pf.c ft_puthex_pf.c ft_putnbr_pf.c ft_putptr_pf.c ft_putstr_pf.c ft_putuint_pf.c

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
