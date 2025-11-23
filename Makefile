# variables
NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

# liste des fichiers .c
SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memset.c \
            ft_memmove.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
            
# règle par défaut
all: $(NAME)

# transformer .c -> .o
OBJECTS	= $(SRCS:.c=.o)

# lien de l'executable 
# $@ = $(TARGET)
# S^ = $(OBJECTS)
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# compilation des .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# declaration des cibles phony
.PHONY: all clean fclean re

# supprime les .o
clean:
	rm -f $(OBJECTS)

# nettoyage complet
fclean: clean
	rm -f $(NAME)

# recompile proprement
re: fclean all

