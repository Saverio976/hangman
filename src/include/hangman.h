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
void reinitialiser_tab(char *input, char *input_history);
void reinitialiser_int(int *ptr_coup_restant);
void set_mot_afficher(char *mot_afficher, int len_word);
void set_up_game1(char *secret_word, char *hidden_word, char *input, char *input_history, int *nb_joker);
void set_up_game2(char *secret_word, char *hidden_word, char *input, char *input_history, int *nb_joker);
void reinitialiser_secret_word(char *secret_word);


//pick_word
char *get_mot(char *mot_a_deviner);

//get_random
int gen_random(int max);

//tour_de_jeu
int input_in_word(char *input, char *mot_a_deviner, char *mot_afficher);
bool is_end(char hidden_word[]);
void check(char *input, char *secret_word, char *hidden_word, int *ptr_nb_joker);
void show_information_in_game(int nb_joker, char *hidden_word, char *input_history);
void show_information_end_game(char *secret_word, int nb_joker);
bool is_replay();
bool ft_is_one_player();

//modif to db mot
int db_to_upper();
int add_word();
int suppr_empty();
int suppr_all_words();

#endif
