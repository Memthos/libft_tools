SRCS_DIR=sources/
OBJS_DIR=objects/
HEADERS=headers/
SRCS=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c get_next_line.c get_next_line_utils.c
OBJS=$(addprefix $(OBJS_DIR), $(SRCS:.c=.o))
FTPRINTF_DIR=libs/ft_printf/
FTPRINTF=$(addprefix $(FTPRINTF_DIR), libftprintf.a)
CC=cc
CFLAGS=-Wall -Wextra -Werror -I$(HEADERS)
NAME=libft.a

all: $(NAME)

$(NAME): $(OBJS) $(FTPRINTF)
	ar -rcs $@ $^

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(FTPRINTF):
	make -sC $(LIBS_DIR) all

clean:
	rm -drf $(OBJS_DIR)
	make -sC $(LIBS_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -sC $(LIBS_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
