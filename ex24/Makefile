CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLSGS = rcs

SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLSGS) $(NAME) $(OBJS)

%.0: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all