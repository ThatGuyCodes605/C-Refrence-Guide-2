CC = gcc
CFLAGS = -Wall -Wextra -std=c23 -g
LDLIBS = -lcs50

CS50: CS50.c
	$(CC) $(CFLAGS) -o CS50 CS50.c $(LDLIBS)

.PHONY: clean run

clean:
	rm -f CS50

run: CS50
	./CS50

