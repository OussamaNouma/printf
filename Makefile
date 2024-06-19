NAME = libftprintf.a

SRCS = ft_putchr.c \
		ft_putnbr_multi.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_printf.c \

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re