ALL = 	src/database.c \
		src/engine.c \
		src/main.c \
		src/ui.c \
		src/engine/market.c \
		src/engine/player.c \
		src/engine/tick.c \
		src/engine/market/demand.c \
		src/engine/market/prices.c \
		src/engine/market/supply.c \
		src/engine/player/savings.c \
		src/engine/player/share.c

all:
	gcc -Iheaders $(ALL) -o Game
	./Game