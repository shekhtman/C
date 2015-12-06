#
# Makefile
#
# Computer Science 50
# Problem Set 3
#

breakout: breakout.c Makefile
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -Wno-unused-variable -o breakout breakout.c gevents.c gobjects.c gwindow.c -lcs50 -lm

clean:
	rm -f *.o core breakout
