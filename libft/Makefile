CC = gcc
CFLAGS= -Wall -Wextra -Werror # Differents flags
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
HEADERS= libft.h
NAME= libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

$(OBJ) : $(HEADERS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : fclean
	rm -f $(OBJ)
	@echo "DELETE .o AND .a"

fclean : 
	rm -f $(NAME)

re : fclean all