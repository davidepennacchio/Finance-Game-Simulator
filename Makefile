FLAGS = -Wall -Wextra -Werror
MAIN = src/main.c

ALL = src/ui.c

UI = src/ui.c

ui:
	gcc $(FLAGS) $(MAIN) $(UI) -o tests/ui_test
	./tests/ui_test

all:
	gcc $(FLAGS) $(MAIN) $(ALL) -o Game
	./Game