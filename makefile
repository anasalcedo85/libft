# nombre de la librería
NAME = libft.a 

# compilador y las flags
CC = @cc
CFLAGS = -Wextra -Werror -Wall

# archivos fuente
SRC = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c

# archivo objetos
OBJ = $(SRC:.c=.o)

# cómo compilar los archivos objetos
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# construir la librería
all: $(NAME)

# construir la librería
$(NAME): $(OBJ)
	@ar -cr $(NAME) $(OBJ)

# elimina los archivo objeto
clean:
	@rm -f $(OBJ)

# elimina los archivos objeto y la librería
fclean: clean
	@rm -f $(NAME)

# rehacer: elimina los archivo objetos y la librería y vuelve a construir la librería
re: fclean all 

# como utilizar la librería: 
# -L donde está la librería
# -l cómo se llama la librería (sin lib ni .a)
#
# cc main.c -L . -l ft