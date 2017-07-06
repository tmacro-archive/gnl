# **************************************************************************** #ME
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/05 09:30:29 by tmckinno          #+#    #+#              #
#    Updated: 2017/07/06 14:29:29 by tmckinno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libft.a
CC     = gcc
CFLAGS = -Wall -Werror -Wextra
OBJDIR = build
SRCDIR = srcs
INC    = -I ./includes/

.PHONY = all clean fclean re

FUNC +=	ft_memalloc.c \
		ft_memdel.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnew.c \
		ft_strlen.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strncat.c \
		ft_strrchr.c \
		ft_strcmp.c \
		ft_strstr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_isws.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_ctrim.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_strnew_d.c \
		ft_strlen_d.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstiter.c \
		ft_lstlen.c \
		ft_lstpush.c \
		ft_putnstr.c \
		ft_lstpop.c \
		ft_lstapp.c \
		ft_lstlast.c

OBJ = $(FUNC:%.c=$(OBJDIR)/%.o)
SRC = $(addprefix $(SRCDIR)/, $(FUNC))

all: $(NAME) 

$(OBJ): | build

build:
	@mkdir -p $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re: fclean $(NAME)

