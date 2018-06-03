NAME = libftprintf.a

FILENAMES = \
ft_printf.c\
not_numbers.c\
numbers.c\
base10_i.c\
base10_u.c\
base8.c\
base16_x.c\
modifier_j.c\
unicode.c\
extra.c\
colors.c\
libft_1.c\
libft_2.c

CFLAGS = -Wall -Wextra -Werror
OBJECTS = $(FILENAMES:.c=.o)

$(NAME): $(OBJECTS)
	gcc $(CFLAGS) -c $(FILENAMES)
	ar rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)
clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
