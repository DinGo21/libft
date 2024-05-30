NAME = libft.a

LIB = ar rcs

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = $(wildcard *.c)
PRINTF_SRC = $(wildcard ft_printf/*.c)
SRC_BONUS = $(wildcard ft_lists/*.c)

OBJ = $(SRC:.c=.o)
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(PRINTF_OBJ)
	@$(LIB) $(NAME) $(OBJ) $(PRINTF_OBJ)

$(PRINTF_OBJ): $(OBJ)

bonus: $(OBJ_BONUS) $(OBJ)
	@$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS) $(PRINTF_OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
