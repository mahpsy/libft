SRC =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi


OBJ = $(SRC:.c=.o)
NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar r $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

test :
	cc *.c -Wall -Wextra -Werror && ./a.out

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

# bonus : all

.PHONY : all clean fclean re bonus test
