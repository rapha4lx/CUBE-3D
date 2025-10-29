# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 16:29:27 by rferro-d          #+#    #+#              #
#    Updated: 2025/02/24 21:11:53 by rferro-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC= cc
CFLAGS= -g -Wall -Werror -Wextra

SRC_PATH=                src/

MEM_FUNC_PATH=           mem_func/
STRING_FUNC_PATH=        string_func/
CONVERT_TYPE_FUNC_PATH=  convert_type_func/
IS_FUNC_PATH=            is_func/
WRITE_FUNC_PATH=         write_func/
LIST_FUNC_PATH=          list_func/

OBJS_PATH= objs/

MEM_FUNC=           $(MEM_FUNC_PATH)ft_memchr.c \
                    $(MEM_FUNC_PATH)ft_memcmp.c \
                    $(MEM_FUNC_PATH)ft_memcpy.c \
                    $(MEM_FUNC_PATH)ft_memset.c \
                    $(MEM_FUNC_PATH)ft_bzero.c \
                    $(MEM_FUNC_PATH)ft_memmove.c \
                    $(MEM_FUNC_PATH)ft_calloc.c \
                    $(MEM_FUNC_PATH)ft_free_split.c
#

STRING_FUNC=        $(STRING_FUNC_PATH)ft_strchr.c \
                    $(STRING_FUNC_PATH)ft_strrchr.c \
                    $(STRING_FUNC_PATH)ft_strncmp.c \
                    $(STRING_FUNC_PATH)ft_strnstr.c \
                    $(STRING_FUNC_PATH)ft_strlcat.c \
                    $(STRING_FUNC_PATH)ft_strlcpy.c \
                    $(STRING_FUNC_PATH)ft_strdup.c \
                    $(STRING_FUNC_PATH)ft_strlen.c \
                    $(STRING_FUNC_PATH)ft_substr.c \
                    $(STRING_FUNC_PATH)ft_strjoin.c \
                    $(STRING_FUNC_PATH)ft_strtrim.c \
                    $(STRING_FUNC_PATH)ft_strmapi.c \
                    $(STRING_FUNC_PATH)ft_striteri.c \
                    $(STRING_FUNC_PATH)ft_toupper.c \
                    $(STRING_FUNC_PATH)ft_tolower.c \
                    $(STRING_FUNC_PATH)ft_split.c \
                    $(STRING_FUNC_PATH)ft_search_and_replace.c \
                    $(STRING_FUNC_PATH)get_next_line.c \
                    $(STRING_FUNC_PATH)ft_get_split_size.c \
                    $(STRING_FUNC_PATH)ft_first_word.c \
                    $(STRING_FUNC_PATH)ft_give_after_space.c \
                    $(STRING_FUNC_PATH)ft_count_at_next_char.c
#

CONVERT_TYPE_FUNC=  $(CONVERT_TYPE_FUNC_PATH)ft_atoi_hex.c \
                    $(CONVERT_TYPE_FUNC_PATH)ft_atol.c \
                    $(CONVERT_TYPE_FUNC_PATH)ft_itoa.c \
                    $(CONVERT_TYPE_FUNC_PATH)ft_atoi.c
# 

IS_FUNC=            $(IS_FUNC_PATH)ft_isalpha.c \
                    $(IS_FUNC_PATH)ft_isdigit.c \
                    $(IS_FUNC_PATH)ft_isalnum.c \
                    $(IS_FUNC_PATH)ft_isascii.c \
                    $(IS_FUNC_PATH)ft_isprint.c     
#

WRITE_FUNC=         $(WRITE_FUNC_PATH)ft_putchar_fd.c \
                    $(WRITE_FUNC_PATH)ft_putendl_fd.c \
                    $(WRITE_FUNC_PATH)ft_putnbr_fd.c \
                    $(WRITE_FUNC_PATH)ft_printf.c \
                    $(WRITE_FUNC_PATH)ft_putnbr_unsigned.c \
                    $(WRITE_FUNC_PATH)ft_putnbr_unsigned_base.c \
					$(WRITE_FUNC_PATH)ft_putstr_fd.c \
                    $(WRITE_FUNC_PATH)ft_putstr.c \
                    $(WRITE_FUNC_PATH)ft_putnbr_base.c
#

LIST_FUNC=          $(LIST_FUNC_PATH)ft_lstnew.c \
                    $(LIST_FUNC_PATH)ft_lstadd_front.c \
                    $(LIST_FUNC_PATH)ft_lstsize.c \
                    $(LIST_FUNC_PATH)ft_lstlast.c \
                    $(LIST_FUNC_PATH)ft_lstadd_back.c \
                    $(LIST_FUNC_PATH)ft_lstdelone.c \
                    $(LIST_FUNC_PATH)ft_lstclear.c \
                    $(LIST_FUNC_PATH)ft_lstiter.c \
                    $(LIST_FUNC_PATH)ft_lstmap.c \
                    $(LIST_FUNC_PATH)ft_lst_by_index.c 
#

OBJS_MEM_FUNC=           $(addprefix $(OBJS_PATH)$(MEM_FUNC_PATH), $(notdir $(MEM_FUNC:.c=.o)))
OBJS_STRING_FUNC=        $(addprefix $(OBJS_PATH)$(STRING_FUNC_PATH), $(notdir $(STRING_FUNC:.c=.o)))
OBJS_CONVERT_TYPE_FUNC=  $(addprefix $(OBJS_PATH)$(CONVERT_TYPE_FUNC_PATH), $(notdir $(CONVERT_TYPE_FUNC:.c=.o)))
OBJS_IS_FUNC=            $(addprefix $(OBJS_PATH)$(IS_FUNC_PATH), $(notdir $(IS_FUNC:.c=.o)))
OBJS_WRITE_FUNC=         $(addprefix $(OBJS_PATH)$(WRITE_FUNC_PATH), $(notdir $(WRITE_FUNC:.c=.o)))
OBJS_LIST_FUNC=          $(addprefix $(OBJS_PATH)$(LIST_FUNC_PATH), $(notdir $(LIST_FUNC:.c=.o)))

OBJS= $(OBJS_MEM_FUNC) \
      $(OBJS_STRING_FUNC) \
      $(OBJS_CONVERT_TYPE_FUNC) \
      $(OBJS_IS_FUNC) \
      $(OBJS_WRITE_FUNC) \
      $(OBJS_LIST_FUNC)
#

all: paths $(NAME)

$(OBJS_PATH)$(MEM_FUNC_PATH)%.o: $(SRC_PATH)$(MEM_FUNC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
#

$(OBJS_PATH)$(STRING_FUNC_PATH)%.o: $(SRC_PATH)$(STRING_FUNC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
#

$(OBJS_PATH)$(CONVERT_TYPE_FUNC_PATH)%.o: $(SRC_PATH)$(CONVERT_TYPE_FUNC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
#

$(OBJS_PATH)$(IS_FUNC_PATH)%.o: $(SRC_PATH)$(IS_FUNC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
#

$(OBJS_PATH)$(WRITE_FUNC_PATH)%.o: $(SRC_PATH)$(WRITE_FUNC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
#

$(OBJS_PATH)$(LIST_FUNC_PATH)%.o: $(SRC_PATH)$(LIST_FUNC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@
#

paths:
	@mkdir -p $(OBJS_PATH)
	@mkdir -p $(OBJS_PATH)$(MEM_FUNC_PATH)
	@mkdir -p $(OBJS_PATH)$(STRING_FUNC_PATH)
	@mkdir -p $(OBJS_PATH)$(CONVERT_TYPE_FUNC_PATH)
	@mkdir -p $(OBJS_PATH)$(IS_FUNC_PATH)
	@mkdir -p $(OBJS_PATH)$(WRITE_FUNC_PATH)
	@mkdir -p $(OBJS_PATH)$(LIST_FUNC_PATH)
#

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
#

clean:
	@rm -f $(OBJS)
#

fclean: clean
	@rm -rf $(NAME)
#

re: fclean $(NAME)

.PHONY: all clean fclean re
