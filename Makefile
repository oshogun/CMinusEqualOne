all:
	gcc src/birb.c -o birb -std=c99 -Iinclude

clean:
	rm birb