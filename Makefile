NAME = 	libftprintf.a
CC = gcc
SRCS = 	ft_printf.c \
		type_processing.c \
		type_processing_hex.c \
		functions.c 

OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -g
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re