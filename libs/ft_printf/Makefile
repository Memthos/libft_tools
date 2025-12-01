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
	@ar -rcs $@ $^
	@echo "Finished compiling Ft_Printf"

$(OBJS_DIR)%.o:$(SRCS_DIR)%.c
	@echo "Compiling sources..."
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -drf $(OBJS_DIR)
	@echo "Cleaned Ft_Printf object files"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned Ft_Printf"

re: fclean all
	@echo "Recompiled Ft_Printf"

.PHONY: all clean fclean res
