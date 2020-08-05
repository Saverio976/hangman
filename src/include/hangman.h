/*
c041ng 8y Paradox
*/
#ifndef DEF_MAIN


#define DEF_MAIN
#define NB_DE_COUP  10
#define TAILLE_MAX  50
#define bool    _Bool
#define TRUE    1
#define FALSE   0


//mylib
#include "my_lib.h"

//reinitialisation
void reinitialiser_tab(char *mot_a_deviner, char *mot_afficher, char *input);
void reinitialiser_int(int *ptr_coup_restant);

//pick_word
char *get_mot(char *mot_a_deviner);

//get_random
int gen_random(int max);

//tour_de_jeu
int lettre_in_word(char *input, char *mot_a_deviner, char *mot_afficher, int nb_coup);
int fin(char mot_afficher[]);

#endif
