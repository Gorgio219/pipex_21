NAME	= pipex

CFLAGS	= -Wall -Wextra -Werror -I $(HEADER)

HEADER	= pipex.h
CC		= gcc
RM		= rm -rf

SRC		= 	pipex.c\
			utils.c\
			checker_p.c\

OBJ		= $(SRC:%.c=%.o)

LIBDIR 	= libft

LIBFT	= libft.a

.PHONY		:	all re clean fclean

all			: $(NAME)

$(NAME)		: $(OBJ)
			@make -C $(LIBDIR)/
			$(CC) -o $(NAME) $(OBJ) -Llibft -lft

%.o		: %.c $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@ -I

clean		:
			$(RM) $(OBJ)
			@make clean -C $(LIBDIR)/

fclean		: clean
			$(RM) $(NAME)
			@make fclean -C $(LIBDIR)/

re			: fclean all
