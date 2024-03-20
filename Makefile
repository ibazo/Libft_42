NAME = libft.a
CC = CC
CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	Strings_Functions/ft_strchr.c \
	Strings_Functions/ft_strlcat.c \
	Strings_Functions/ft_strlcpy.c \
	Strings_Functions/ft_strjoin.c \
	Strings_Functions/ft_strlen.c \
	Strings_Functions/ft_strrchr.c \
	Strings_Functions/ft_striteri.c \
	Strings_Functions/ft_strncmp.c \
	Strings_Functions/ft_strnstr.c \
	Strings_Functions/ft_strtrim.c \
	Strings_Functions/ft_strmapi.c \
	Strings_Functions/ft_itoa.c \
	Strings_Functions/ft_atoi.c \
	Strings_Functions/ft_tolower.c \
	Strings_Functions/ft_toupper.c \
	Strings_Functions/ft_substr.c \
	Strings_Functions/ft_split.c \
	Strings_Functions/ft_strdup.c \
	\
	Check_Functions/ft_isalnum.c \
	Check_Functions/ft_isalpha.c \
	Check_Functions/ft_isdigit.c \
	Check_Functions/ft_isprint.c \
	Check_Functions/ft_isascii.c \
	\
	Memory_Functions/ft_memcpy.c \
	Memory_Functions/ft_memmove.c \
	Memory_Functions/ft_bzero.c \
	Memory_Functions/ft_memset.c \
	Memory_Functions/ft_memchr.c \
	Memory_Functions/ft_memcmp.c \
	Memory_Functions/ft_calloc.c \
	 \
	Write_Functions/ft_putchar_fd.c \
	Write_Functions/ft_putstr_fd.c \
	Write_Functions/ft_putendl_fd.c \
	Write_Functions/ft_putnbr_fd.c \

OBJECTS = $(SOURCES:%.c=%.o)

BONUS = \
	Linked_List_Functions/ft_lstnew_bonus.c \
	Linked_List_Functions/ft_lstadd_front_bonus.c \
	Linked_List_Functions/ft_lstsize_bonus.c \
	Linked_List_Functions/ft_lstlast_bonus.c \
	Linked_List_Functions/ft_lstadd_back_bonus.c \
	Linked_List_Functions/ft_lstdelone_bonus.c \
	Linked_List_Functions/ft_lstclear_bonus.c \
	Linked_List_Functions/ft_lstiter_bonus.c \
	Linked_List_Functions/ft_lstmap_bonus.c \

BONUS_OBJS = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	echo ""
	echo "  ##---------------------------------------------------------##"
	echo "  ##                                                         ##"
	echo "  ##        Makefile: The library has been compiled.         ##"
	echo "  ##                                                         ##"
	echo "  ##---------------------------------------------------------##"
	echo ""

clean:
	rm -f $(OBJECTS) $(BONUS_OBJS)
	echo ""
	echo "  ##---------------------------------------------------------##"
	echo "  ##                                                         ##" 
	echo "  ##  Makefile: The .o terminated files have been removed.   ##"
	echo "  ##                                                         ##"
	echo "  ##---------------------------------------------------------##"
	echo ""

fclean: clean
	rm -f $(NAME)

	echo "  ##---------------------------------------------------------##"
	echo "  ##                                                         ##"
	echo "  ##  Makefile: The library libft.a has been removed.        ##"
	echo "  ##                                                         ##"
	echo "  ##---------------------------------------------------------##"
	echo ""

re: fclean $(NAME)

bonus: $(OBJECTS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJS)
	echo ""
	echo "  ##---------------------------------------------------------##"
	echo "  ##                                                         ##"
	echo "  ##  Makefile: The library has been compiled with bonuses.  ##"
	echo "  ##                                                         ##"
	echo "  ##---------------------------------------------------------##"
	echo ""

.SILENT:
.PHONY: all clean fclean re bonus