CC = cc
CFLAGS= -Wall -Wextra -Werror # Differents flags
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
HEADERS= libft.h
NAME= libft.a

all : $(NAME)

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all