TODAY=$(shell date +%Y%m%d-%H%M%S)
BUILDID=$(shell date +%Y%m%d-%H:%M:%S)

#DEPS=ncurses.h
#CFLAGS=-Werror -Wall -lncurses

CREV=c11
CFLAGS=-Werror -Wall -std=$(CREV) -ggdb -g3

NAME=bin_search
INPUT=$(NAME).c
OBJECT=$(NAME).o
OUTPUT=$(NAME)

all:
	$(CC) $(CFLAGS) -c include/steves_functions.c -o include/steves_functions.o
	$(CC) $(CFLAGS) -c $(INPUT) -o $(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) include/steves_functions.o -o $(OUTPUT)

archive:
	mv *.c archives/

clean:
	rm -rf $(OUTPUT)
	rm -rf $(OBJECT)
	rm -rf include/*.o

commit:
	git add -A .
	git commit -m 'automatic commit of successful build $(BUILDID)'
	git push

gdb:
	gdb ./$(NAME)

new:
	cp skel/main.c .
	mv main.c $(INPUT)

test:
	valgrind ./$(OUTPUT)
