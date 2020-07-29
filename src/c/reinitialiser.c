/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

void reinitialiser_tab(char *mot_a_deviner, char *mot_afficher, char *input){
    for (int i = 0; i < TAILLE_MAX; i++){
        mot_a_deviner[i] = '\0';
        mot_afficher[i] = '\0';
        input[i] = '\0';
    }
}

void reinitialiser_char(char *ptr_lettre){
    *ptr_lettre = '\0';
}

void reinitialiser_int(int *ptr_coup_restant){
    *ptr_coup_restant = NB_DE_COUP;
}
