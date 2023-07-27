# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 12:11:58 by cjackows          #+#    #+#              #
#    Updated: 2023/07/27 15:25:33 by cjackows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED			=	\033[38;5;160m
RED_B		=	\033[48;5;160m
DELETED		=	\033[48;5;160m[DELETED]\033[0m
GREEN		=	\033[38;5;40m
GREEN_B		=	\033[48;5;40m
COMPILATION	=	\033[48;5;40m[COMPILATION]\033[0m $(GREEN)
BLUE		=	\033[38;5;123m
BLUE_B		=	\033[48;5;39m
INFO		=	\033[48;5;39m[INFORMATION]\033[0m $(BLUE)
RESET		=	\033[0m
PROGRESS_WIDTH = 20
ifeq ($(shell uname), Linux)
	OS			=	Linux
	PROGRESS_DONE_CHAR = \#
	PROGRESS_TODO_CHAR = -
else
	OS				=	Mac
	PROGRESS_DONE_CHAR = 🟩
	PROGRESS_TODO_CHAR = ⬜️
endif
CURRENT_PROGRESS = 0
TOTAL_PROGRESS = $(words $(OBJ))

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
#-fsanitize=address
 
LIBFT_DIR	=	./inc/42-libft/
LIBFT		=	$(LIBFT_DIR)libft.a
HDRS_DIR	=	./inc/
SRC_DIR		=	./src/

HDRS 		=	-I$(LIBFT_DIR)/inc -I$(HDRS_DIR)
LIBS		=	-L$(LIBFT_DIR)

all: libft ascii-art server client

server:
	@echo "$(COMPILATION)server compilation.$(RESET)"
	$(CC) $(CFLAGS) -o server src/server.c $(HDRS) $(LIBFT)

client:
	@echo "$(COMPILATION)client compilation.$(RESET)"
	$(CC) $(CFLAGS) -o client src/client.c $(HDRS) $(LIBFT)

libft:
	@make all --quiet -C  $(LIBFT_DIR)
	@clear

clean:
	@make clean --quiet -C $(LIBFT_DIR)
	@for obj in $(OBJ); do \
		rm -f $$obj; \
		printf "$(RED_B)[DELETED]$(RESET) $(RED)$$obj$(RESET)\n"; \
	done

fclean: clean
	@make fclean --quiet -C $(LIBFT_DIR)
	@rm -f server;
	@rm -f client;
	@printf "$(RED_B)[DELETED]$(RESET) $(RED)$(NAME)$(RESET)\n"; \

fclean_fast:
	@for obj in $(OBJ); do \
		rm -f $$obj; \
		printf "$(RED_B)[DELETED]$(RESET) $(RED)$$obj$(RESET)\n"; \
	done
	@rm -f $(NAME);
	@printf "$(RED_B)[DELETED]$(RESET) $(RED)$(NAME)$(RESET)\n"; \

re: fclean all

sre: fclean_fast all

norm:
	@norminette * | grep Error

git:
	@echo "$(BLUE)"
	git add *
	@read -p "Commit msg:" msg;\
	git commit -m "$$msg"
	git push
	@echo "$(INFO)$(GREEN)Git add, commit, push performed ✅$(RESET)"

ascii-art:
	@echo "\033[38;5;231m    ▁▁▁▁▁ ▁▁▁▁▁▁▁▁              ▁▁▁▁▁  .▁▁       .▁▁▁▁▁▁▁▁▁▁▁▁▁      .▁▁   ▁▁            \033[0m"
	@echo "\033[38;5;195m   ╱  │  │╲▁▁▁▁▁  ╲            ╱     ╲ │▁▁│ ▁▁▁▁ │▁▁╲▁▁    ▁▁▁╱▁▁▁▁  │  │ │  │ ▁▁         \033[0m"
	@echo "\033[38;5;159m  ╱   │  │▁╱  ▁▁▁▁╱   ▁▁▁▁▁▁  ╱  ╲ ╱  ╲│  │╱    ╲│  │ │    │  ╲▁▁  ╲ │  │ │  │╱ ╱         \033[0m"
	@echo "\033[38;5;123m ╱    ^   ╱       ╲  ╱▁▁▁▁▁╱ ╱    Y    ╲  │   │  ╲  │ │    │   ╱ ▁▁ ╲│  │▁│    <           \033[0m"
	@echo "\033[38;5;123m ╲▁▁▁▁   │╲▁▁▁▁▁▁▁ ╲         ╲▁▁▁▁│▁▁  ╱▁▁│▁▁▁│  ╱▁▁│ │▁▁▁▁│  (▁▁▁▁  ╱▁▁▁▁╱▁▁│▁ ╲      \033[0m"
	@echo "\033[38;5;123m      │▁▁│        ╲╱                 ╲╱        ╲╱                  ╲╱          ╲╱           \033[0m"
	@echo; echo;

.PHONY: all clean fclean re sre git libft