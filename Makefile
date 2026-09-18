ALL = 	src/main.c \
		src/ui.c \
		src/database.c \
		src/engine.c

all:
	gcc -Wall -Wextra -Werror $(ALL) -o Game
	./Game