ALL = 	src/database.c \
		src/engine.c \
		src/main.c \
		src/ui.c \
		src/engine/market/demand.c \
		src/engine/market/prices.c \
		src/engine/market/supply.c \
		src/engine/player/savings.c \
		src/engine/player/share.c \
		src/engine/player/start.c 

all:
	gcc -Wall -Wextra -Werror -Iheaders $(ALL) -o Game
	./Game