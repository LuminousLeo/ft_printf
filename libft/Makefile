NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

OBJS = ft_bzero.o ft_isascii.o ft_memcpy.o \
	   ft_strlcpy.o ft_isalnum.o ft_isdigit.o \
	   ft_memmove.o ft_strlen.o ft_isalpha.o \
	   ft_isprint.o ft_memset.o ft_strlcat.o \
	   ft_toupper.o ft_tolower.o ft_strchr.o \
	   ft_strrchr.o ft_strncmp.o ft_memchr.o \
	   ft_memcmp.o ft_strnstr.o ft_atoi.o \
	   ft_strdup.o ft_calloc.o ft_substr.o \
	   ft_strjoin.o ft_strtrim.o ft_split.o \
	   ft_itoa.o ft_strmapi.o ft_striteri.o \
	   ft_putchar_fd.o ft_putstr_fd.o \
	   ft_putendl_fd.o ft_putnbr_fd.o \

BONUS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o \
		ft_lstsize_bonus.o ft_lstlast_bonus.o \
		ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
		ft_lstclear_bonus.o ft_lstmap_bonus.o \
		ft_lstiter_bonus.o


all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

bonus: .bonus

.bonus: $(BONUS) $(OBJS)
	ar -rc $(NAME) $(BONUS) $(OBJS)
	touch .bonus

%.o: %.c
	cc $(CFLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJS) $(BONUS)

fclean: clean
	rm -rf $(NAME) .bonus

re: fclean all
