NAME = Sully
SRC_NAME = Sully.c
OBJ_NAME = $(SRC_NAME:.c=.o)
	OBJ_PATH = obj/
	SRC_PATH = ./
	SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
	OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
	FLAG = -Wall -Wextra -Werror

$(NAME) : $(OBJ)
	gcc $(FLAG) $^ $(LIB) -o $@

all : $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	gcc $(FLAG) -o $@ -c $<

clean :
	rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean : clean
	rm -f $(NAME)
	rm -f Sully_*

re : fclean all

.PHONY : all clean fclean re norme
