CC = gcc
CFLAGS= -Wall -Wextra -Werror # Differents flags
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
HEADERS= libft.h
NAME= libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs -o $(NAME) $(SRC)

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJ)
	@echo "DELETE .o AND .a"

re : fclean all