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
		./src/c/modif_db_mot.c	\


OBJET =	gen_random.o	\
		pick_word.o	\
		reinitialiser.o	\
		tour_de_jeu.o	\
		modif_db_mot.o


# ----------------------------------------------------------------------------

help:
	less ./Doc/HELP.md

aide:
	less ./Doc/AIDE.md

init:	cleanall object mylib lib compil clean

keep: 	cleanall object mylib lib compil

object:
	echo "# # # # # # # # # # object"
	gcc -c $(SRC)

lib:
	echo "# # # # # # # # # # lib"
	ar rc $(GAMELIB) $(OBJET)
	ranlib $(GAMELIB)
	ar rcT $(MASTERLIB) $(GAMELIB) $(MYLIB)
	ranlib $(MASTERLIB)

compil:
	echo "# # # # # # # # # # compil"
	gcc $(TARGET) -L. -lall -o $(EXE)

clean:
	echo "# # # # # # # # # # clean"
	rm -f $(MASTERLIB) $(GAMELIB) *.o

cleanall:
	echo "# # # # # # # # # # cleanall"
	rm -f $(MASTERLIB) $(GAMELIB) $(EXE) *.o
	
mylib:
	echo "# # # # # # # # # # libmy"
	rm -r -f libmy
	git clone https://github.com/Saverio976/libmy.git
	cd libmy;	\
	make init
