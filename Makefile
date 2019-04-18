NAME=gnl

all: $(NAME)

gcc-c:
		gcc -Werror -Wextra -Wall -c get_next_line.c main.c 

$(NAME): gcc-c
		gcc -Werror -Wextra -Wall main.o get_next_line.o -o $(NAME) libft/libft.a
clean:
		rm -rf get_next_line.o main.o

fclean: clean
		rm $(NAME)

re: fclean all
