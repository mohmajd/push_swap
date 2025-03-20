NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -f

SRC = checkerrors.c	ft_split.c	main.c	push_swap.c	smallsort.c	utils.c	utils2.c	\
		utils3.c	moves/push.c	moves/rotate.c	moves/swap.c  gc.c	\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
		 $(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ) 

fclean: clean
		$(RM) $(NAME)

re: fclean all