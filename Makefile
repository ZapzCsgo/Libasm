NAME = lib/libasm.a

SRC = ft_strlen.s ft_strcmp.s ft_strcpy.s
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.s=.o))

all: $(NAME)

$(OBJ_DIR)/%.o: %.s
	mkdir -p $(OBJ_DIR)
	nasm -f elf64 $< -o $@

$(NAME): $(OBJ)
	mkdir -p lib
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re