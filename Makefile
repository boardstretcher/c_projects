BUILDID=$(shell date +%Y%m%d-%H:%M:%S)
#CFLAGS=-Werror -Wall -lncurses
#DEPS=ncurses.h
OUTPUT=main

all:
	$(CC) $(CFLAGS) main.c -o $(OUTPUT)

clean:
	rm -rf main

commit:
	    git add -A .
	    git commit -m 'automatic commit of successful build $(BUILDID)'

