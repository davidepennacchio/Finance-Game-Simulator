FLAGS = -Wall -Wextra -Werror
FILES = src/main.c \
		src/ui.c

all:
	gcc $(FLAGS) $(FILES) -o Finance_Game_Simulator
	./Finance_Game_Simulator