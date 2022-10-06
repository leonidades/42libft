NAME = libft.a

SRC = *.c
SRC = *.c

OBJS = $(SRC:%.c=%.o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)
bonus: 
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
