#	\
c041ng 8y Paradox	\
*/

MYLIB = 	./libmy/libmy.a

GAMELIB =	libgame.a

MASTERLIB =	liball.a

EXE = 	hangman

TARGET =	./src/c/hangman.c

SRC =	./src/c/gen_random.c	\
		./src/c/pick_word.c	\
		./src/c/reinitialiser.c	\
		./src/c/tour_de_jeu.c	\


OBJET =	gen_random.o	\
		pick_word.o	\
		reinitialiser.o	\
		tour_de_jeu.o	\


# ----------------------------------------------------------------------------

help:
	less ./Doc/HELP.md

aide:
	less ./Doc/AIDE.md

init:	cleanall object lib compil clean

keep: 	cleanall object lib compil

object:
	gcc -c $(SRC)

lib:
	ar rc $(GAMELIB) $(OBJET)
	ranlib $(GAMELIB)
	ar rcT $(MASTERLIB) $(GAMELIB) $(MYLIB)
	ranlib $(MASTERLIB)

compil:
	gcc $(TARGET) -L. -lall -o $(EXE)

clean:
	rm -f $(MASTERLIB) $(GAMELIB) *.o

cleanall:
	rm -f $(MASTERLIB) $(GAMELIB) $(EXE) *.o
