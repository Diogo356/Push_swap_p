NAME	= push_swap

CC	= cc
INCLUDE		= -I ./include
CFLAGS		= -g -Wall -Wextra -Werror $(INCLUDE)

RM	= rm -rf

PATH_SRCS		= ./src/
PATH_AUX		= $(PATH_SRCS)aux/
PATH_CHECK		= $(PATH_SRCS)check/
PATH_CHOOSE		= $(PATH_SRCS)choose/
PATH_FIND		= $(PATH_SRCS)find_b/
PATH_MAIN		= $(PATH_SRCS)main/
PATH_UTILS		= $(PATH_SRCS)utils/
PATH_ORDER		= $(PATH_SRCS)order/
PATH_MOVE		= $(PATH_SRCS)move/
PATH_OBJS		= ./objs/

SRCS	= $(PATH_AUX)aux.c \
		$(PATH_CHECK)check.c \
		$(PATH_CHOOSE)choose_mov.c \
		$(PATH_FIND)find_bigger_b.c \
		$(PATH_FIND)find_index_previus_in_b.c \
		$(PATH_MAIN)main.c \
		$(PATH_MOVE)execution_move.c \
		$(PATH_MOVE)move_pa.c \
		$(PATH_MOVE)move_pb.c \
		$(PATH_MOVE)move_ra.c \
		$(PATH_MOVE)move_rb.c \
		$(PATH_MOVE)move_rr.c \
		$(PATH_MOVE)move_rra.c \
		$(PATH_MOVE)move_rrb.c \
		$(PATH_MOVE)move_rrr.c \
		$(PATH_MOVE)move_sa.c \
		$(PATH_MOVE)move_sb.c \
		$(PATH_MOVE)move_ss.c \
		$(PATH_ORDER)order_five.c \
		$(PATH_ORDER)order_tree.c \
		$(PATH_ORDER)order_hundred.c \
		$(PATH_UTILS)exit.c \
		$(PATH_UTILS)ft_atoi.c \
		$(PATH_UTILS)ft_bzero.c \
		$(PATH_UTILS)ft_calloc.c \
		$(PATH_UTILS)ft_isdigit.c \
		$(PATH_UTILS)ft_strcmp.c \
		$(PATH_UTILS)ft_strlen.c \

OBJS	= $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME) 

$(PATH_OBJS)%.o:	$(PATH_SRCS)%.c
		@mkdir -p $(PATH_OBJS)
		@mkdir -p $(PATH_OBJS)aux/
		@mkdir -p $(PATH_OBJS)check/
		@mkdir -p $(PATH_OBJS)choose/
		@mkdir -p $(PATH_OBJS)find_b/
		@mkdir -p $(PATH_OBJS)main/
		@mkdir -p $(PATH_OBJS)move/
		@mkdir -p $(PATH_OBJS)order/
		@mkdir -p $(PATH_OBJS)utils/
		
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) ./objs

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all $(PATH_OBJS) clean fclean re