NAME			= push_swap

CFLAGS			= -Wall -Wextra -Werror -g



SRC				= push_swap.c ft_atol.c ft_split.c push.c rotate.c swap.c rev_rotate.c sort.c errors.c nodes.c

OBJS			= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJS) 
	cc $(CFLAGS) $(OBJS)  -o $(NAME)

%.o:%.cc
	cc $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f $(NAME)

re: fclean all

test: all
	@echo "--- Testing with 100 random numbers ---"
	$(eval ARG := $(shell seq 1 100 | shuf | tr '\n' ' '))
	@./push_swap $(ARG) > moves.txt
	@if ./checker_linux $(ARG) < moves.txt | grep -q "OK"; then \
		echo "Result: OK"; \
	else \
		echo "Result: KO"; \
	fi
	@echo "Move count: $$(wc -l < moves.txt)"
	@rm moves.txt


valgrind: all
	@echo "--- Checking Memory Leaks with Valgrind ---"
	$(eval ARG := 1 3 2 5 0 -67)
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./push_swap $(ARG)

# Run: make valgrind-large
valgrind-large: all
	@echo "--- Checking Memory Leaks with 100 Numbers ---"
	$(eval ARG := $(shell seq 1 100 | shuf | tr '\n' ' '))
	@valgrind --leak-check=full --show-leak-kinds=all ./push_swap $(ARG) > /dev/null

.PHONY: all clean fclean re
