TODAY=$(shell date +%Y%m%d-%H%M%S)
BUILDID=$(shell date +%Y%m%d-%H:%M:%S)
#CFLAGS=-Werror -Wall -lncurses
DEPS=ncurses.h

INPUT=upc.c
OUTPUT=upc



all:
	$(CC) $(CFLAGS) $(INPUT) -o $(OUTPUT)

clean:
	rm -rf $(OUTPUT)

commit:
	git add -A .
	git commit -m 'automatic commit of successful build $(BUILDID)'
	git push

new:
	tar czvf archives/$(TODAY).tgz *.c
	rm -rf *.c
