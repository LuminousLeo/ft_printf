NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft

SRCS = ft_printf.c ft_putnbru_fd.c printf_char.c \
	   printf_str.c printf_nbr.c ft_hexl_convert_fd.c \
	   ft_hexu_convert_fd.c printf_percent.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -q $(NAME) $(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
