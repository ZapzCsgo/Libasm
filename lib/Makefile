NAME = libasm
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c
OBJ = $(SRC:.c=.o)
LIBASM = ../lib/libasm.a

all: $(LIBASM) $(NAME)

$(LIBASM):
	$(MAKE) -C ..

$(NAME): $(OBJ) $(LIBASM)
	$(CC) $(CFLAGS) $(OBJ) $(LIBASM) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all