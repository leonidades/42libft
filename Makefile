NAME = libft.a

.SILENT:

SRC =	atoi.c 	bzero.c \
		calloc.c isalnum.c \
		isalpha.c isascii.c \
		isdigit.c isprint.c \
		itoa.c memchr.c \
		memcmp.c memcpy.c \
		memmove.c memset.c \
		putchar_fd.c putstr_fd.c \
		putnbr_fd.c putendl_fd.c \
		split.c strchr.c \
		strjoin.c strdup.c \
		striteri.c strlcat.c \
		strlcpy.c strlen.c \
		strmapi.c strncmp.c \
		strnstr.c strrchr.c \
		substr.c strtrim.c \
		tolower.c toupper.c

OBJS = $(SRC:%.c=%.o)

BONUS =	bonus_lstadd_back.c bonus_lstadd_front.c \
		bonus_lstclear.c bonus_lstdelone.c \
		bonus_lstlast.c bonus_lstmap.c \
		bonus_lstiter.c bonus_lstnew.c \
		bonus_lstsize.c

BONUS_OBJS = $(BONUS:%.c=%.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	echo "Library compiled"

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	echo ".o files removed"

fclean: clean
	rm -f $(NAME)
	echo "Library removed"

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	echo "Library Compiled with bonus"

.PHONY: all clean fclean re bonus