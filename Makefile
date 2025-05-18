NAME = libft.a

SRCS =	src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c src/ft_isprint.c \
		src/ft_isspace.c src/ft_isxdigit.c src/ft_strlen.c src/ft_memset.c src/ft_bzero.c \
		src/ft_memcpy.c src/ft_memmove.c src/ft_strlcpy.c src/ft_strlcat.c src/ft_toupper.c \
		src/ft_tolower.c src/ft_strchr.c src/ft_strrchr.c src/ft_strncmp.c src/ft_strcasecmp.c src/ft_memchr.c \
		src/ft_memcmp.c src/ft_strnstr.c src/ft_atoi.c src/ft_atol.c src/ft_atoll.c src/ft_strtol.c \
		src/ft_abs.c src/ft_labs.c src/ft_llabs.c \
		src/ft_calloc.c src/ft_strdup.c src/ft_strndup.c src/ft_xmalloc.c src/ft_substr.c src/ft_strjoin.c src/ft_strtrim.c \
		src/ft_split.c src/ft_itoa.c src/ft_strmapi.c src/ft_striteri.c src/ft_putchar_fd.c \
		src/ft_putstr_fd.c src/ft_putendl_fd.c src/ft_putnbr_fd.c src/ft_strtoupper.c src/ft_strtolower.c \
		src/ft_startswith.c src/ft_endswith.c \
		src/get_next_line.c src/get_next_line_utils.c \
		src/ft_printf.c src/ft_puthex_fd.c src/ft_putptr_fd.c src/ft_putunbr_fd.c

BONUS =	src/ft_lstadd_back_bonus.c src/ft_lstadd_front_bonus.c src/ft_lstclear_bonus.c \
		src/ft_lstdelone_bonus.c src/ft_lstiter_bonus.c src/ft_lstlast_bonus.c \
		src/ft_lstmap_bonus.c src/ft_lstnew_bonus.c src/ft_lstsize_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -O2
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Creating $@"

bonus: $(OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(BONUS_OBJS)
	@echo "Bonus files added to $@"

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "Cleaning all object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "Cleaning the library"

re: fclean all

.PHONY: all bonus clean fclean re
