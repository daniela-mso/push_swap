NAME = push_swap

#LIBFT_DIR = ./libft

#LIBS = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g #I .

SRC = ft_append_node.c \
ft_errors.c \
ft_price.c \
ft_push.c \
ft_reverse_rotate.c \
ft_rotate.c \
ft_sort_stacks.c \
ft_sorting.c \
ft_stacks.c \
ft_swap.c \
init_a_to_b.c \
init_b_to_a.c \
push_swap.c \
ft_split.c \
ft_helper_functions.c \
ft_atol.c






#ft_atol.c \
#ft_helper_functions.c \
#ft_split.c \





#This line simply creates a variable (OBJS) that contains a list of object files 
#corresponding to the source files listed in SRC.
#It does not actually compile or create the object files; 
#it just prepares a list that tells the makefile which object files are needed
#for linking later.
OBJS = $(SRC:.c=.o)



#This line defines a target called all
#It states that all depends on $(NAME), which represents the final executable
#When you run make all (or just make), make checks if the target $(NAME) (the executable) 
#needs to be built or updated.
all: $(NAME)


#Specifies how to build that executable from its object files.
# -o $(NAME) --> states the name of the executable 
# $(OBJS) --> links the .o files toguether to create the executable
$(NAME): $(OBJS)
	cc $(CFLAGS) -o $(NAME) $(OBJS) 
#$(LIBS)



#This rule is a pattern rule that tells make how to 
#compile any .c file into a corresponding .o file.
%.o:%.c 
	cc $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJS)

fclean: clean
	-rm -f $(NAME)
#	-rm -f *.gch

re: fclean all

.Phony: all clean fclean re 
