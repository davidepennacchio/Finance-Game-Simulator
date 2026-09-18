FLAGS = -Wall -Wextra -Werror
FILES = src/main.c \

all:
	gcc $(FLAGS) $(FILES) -o Finance_Game_Simulator
	./Finance_Game_Simulator