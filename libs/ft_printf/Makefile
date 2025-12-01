SRCS_DIR=sources/
OBJS_DIR=objects/
HEADERS=headers/
SRCS=ft_printf.c ft_output_maths.c ft_output_str.c
OBJS=$(addprefix $(OBJS_DIR), $(SRCS:.c=.o))
CC=cc
CFLAGS=-Werror -Wall -Wextra
NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

$(OBJS_DIR)%.o:$(SRCS_DIR)%.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -drf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re