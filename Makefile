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

# command permettant de tout re compiler
init:	all_clean all_lib compil clean_propre

# commande permettant de ne pas passer par le telechargement de libmy
re_compil:	all_clean object gamelib cat_lib compil clean_propre


# # lib
# créer les object (.o) pour la librairie
object:
	echo "# # # # # # # # # # object"
	gcc -c $(SRC)
# création de la lib utilisée par le fichier princepal hangman.c
gamelib:
	echo "# # # # # # # # # # lib"
	ar rc $(GAMELIB) $(OBJET)
	ranlib $(GAMELIB)
# telechargement et création de la lib personnalisée
mylib:
	echo "# # # # # # # # # # libmy"
	rm -r -f libmy
	git clone https://github.com/Saverio976/libmy.git
	cd libmy;	\
	make init
	\cp "./libmy/src/include/my_lib.h" "./src/include/"
# création de la lib étant une combinaison des deux autres
cat_lib:
	echo "# # # # # # # # # # cat lib"
	ar rcT $(MASTERLIB) $(GAMELIB) $(MYLIB)
	ranlib $(MASTERLIB)
# toutes les commandes de la categorie lib
all_lib:	mylib object gamelib cat_lib

# # création du fichier executable
# création exe
compil:
	echo "# # # # # # # # # # compil"
	gcc $(TARGET) -L. -lall -o $(EXE)

# # suppression des différents composant
# rm *.o
clean_objet:
	echo "# # # # # # # # # # clean all .o"
	rm -f *.o
# rm lib
clean_lib:
	echo "# # # # # # # # # # clean all lib"
	rm -f $(MASTERLIB) $(GAMELIB)
# rm exe
clean_exe:
	echo "# # # # # # # # # # clean exe"
	rm -f $(EXE)
# rm propre
clean_propre:
	echo "# # # # # # # # # # clean propre"
	rm -f *.o
	rm -f $(MASTERLIB) $(GAMELIB)
# rm propre
all_clean:	clean_objet clean_lib clean_exe
