NAME = libft.a

SRC = isalnum.c \
	isalpha.c \
	isascii.c \
	isdigit.c \
	isprint.c \
	strlen.c \
	memset.c \
	bzero.c \
	memcpy.c \
	memmove.c \
	strlcpy.c \
	strlcat.c \
	toupper.c \
	tolower.c \
	strchr.c \
	strrchr.c \
	strncmp.c \
	memchr.c \
	memcmp.c \
	strnstr.c \
	atoi.c \

OBJS = $(SRC:%.c=%.o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "Library Compiled"

$(OBJS) : $(SRC)
	@gcc $(FLAGS) -c $(SRC)

run: all
	
clean:
	@rm -f $(OBJS)
	@echo ".o files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "Library removed"

re: fclean all

.PHONY: all fclean clean re
