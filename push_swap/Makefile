NAME	= push_swap

CC	= cc
INCLUDE		= -I ./include
CFLAGS		= -g -Wall -Wextra -Werror $(INCLUDE)

RM	= rm -rf

PATH_SRCS		= ./src/
PATH_AUX		= $(PATH_SRCS)aux/
PATH_CHECK		= $(PATH_SRCS)check/
PATH_CHOOSE		= $(PATH_SRCS)choose_mov/
PATH_MAIN		= $(PATH_SRCS)main/
PATH_MOVES		= $(PATH_SRCS)moves/
PATH_SORT		= $(PATH_SRCS)sort/
PATH_PORTION	= $(PATH_SRCS)portion_larger_number/
PATH_UTILS		= $(PATH_SRCS)utils/
PATH_OBJS		= ./objs/

SRCS	= $(PATH_AUX)aux.c \
		$(PATH_CHECK)check.c \
		$(PATH_CHOOSE)choose_mov.c \
		$(PATH_MAIN)main.c \
		$(PATH_MOVES)execution_move.c  \
		$(PATH_MOVES)move_pa.c \
		$(PATH_MOVES)move_pb.c \
		$(PATH_MOVES)move_ra.c \
		$(PATH_MOVES)move_rb.c \
		$(PATH_MOVES)move_rr.c \
		$(PATH_MOVES)move_rra.c \
		$(PATH_MOVES)move_rrb.c \
		$(PATH_MOVES)move_rrr.c \
		$(PATH_MOVES)move_sa.c \
		$(PATH_MOVES)move_sb.c \
		$(PATH_MOVES)move_ss.c \
		$(PATH_PORTION)portion_info.c \
		$(PATH_PORTION)portion_large_numbers.c \
		$(PATH_SORT)sort_large_numbers.c \
		$(PATH_SORT)sort_five.c \
		$(PATH_SORT)sort_hundred.c \
		$(PATH_SORT)sort_three.c \
		$(PATH_UTILS)ft_exit.c \
		$(PATH_UTILS)free_struct.c \
		$(PATH_UTILS)ft_array_dup.c \
		$(PATH_UTILS)ft_atoi.c \
		$(PATH_UTILS)ft_calloc.c \
		$(PATH_UTILS)ft_sort_array.c \
		$(PATH_UTILS)ft_isdigit.c \
		$(PATH_UTILS)ft_strcmp.c \

OBJS	= $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o:	$(PATH_SRCS)%.c
		@mkdir -p $(PATH_OBJS)
		@mkdir -p $(PATH_OBJS)aux/
		@mkdir -p $(PATH_OBJS)check/
		@mkdir -p $(PATH_OBJS)choose_mov/
		@mkdir -p $(PATH_OBJS)main/
		@mkdir -p $(PATH_OBJS)moves/
		@mkdir -p $(PATH_OBJS)portion_larger_number/
		@mkdir -p $(PATH_OBJS)sort/
		@mkdir -p $(PATH_OBJS)utils/
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) ./objs

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all $(PATH_OBJS) clean fclean re