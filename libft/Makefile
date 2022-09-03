NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
HEADER = libft.h

FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
		ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp \
		ft_strlen ft_strlcpy ft_strlcat ft_toupper ft_tolower \
		ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_atoi \
		ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim \
		ft_split ft_itoa ft_strmapi ft_striteri\
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS = $(patsubst %.c, %.o, $(SRCS))

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
