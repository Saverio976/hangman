/*
c041ng 8y Paradox
*/
#ifndef DEF_MAIN


#define DEF_MAIN
#define NB_DE_COUP  10
#define TAILLE_MAX  50
#define TRUE    1
#define FALSE   0

typedef _Bool bool;

//mylib
#include "my_lib.h"

//reinitialisation
void reinitialiser_tab(char *mot_a_deviner, char *mot_afficher, char *input);
void reinitialiser_int(int *ptr_coup_restant);
void set_mot_afficher(char *mot_afficher, int len_word);
void set_up_game(char *mot_a_deviner, char *mot_afficher, char *input, int *ptr_coup_restant);


//pick_word
char *get_mot(char *mot_a_deviner);

//get_random
int gen_random(int max);

//tour_de_jeu
int input_in_word(char *input, char *mot_a_deviner, char *mot_afficher);
int is_end(char mot_afficher[]);
void check(char *input, char *secret_word, char *hidden_word, int *ptr_nb_joker);
void show_information_in_game(int nb_joker, char *hidden_word);
void show_information_end_game(char *secret_word, int nb_joker);
bool is_replay();

#endif
