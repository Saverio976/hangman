/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

int lettre_in_word(char *input, char *mot_a_deviner, char *mot_afficher, int nb_coup){
    int lettre_dans_mot_cacher = 0;

    if (my_strlen(mot_a_deviner) == my_strlen(input)){
        if (!my_strcmp(mot_a_deviner, input)){
            my_strcpy(mot_afficher, mot_a_deviner);
            lettre_dans_mot_cacher = 1;
        }
    }

    for (int i = 0; i < my_strlen(mot_a_deviner);i++){
        if (input[0] == mot_a_deviner[i]){
            mot_afficher[i] = input[0];
            lettre_dans_mot_cacher = 1;
        }
    }

    if (!lettre_dans_mot_cacher)
        nb_coup--;

    return (nb_coup);
}

int fin(char mot_afficher[]){
    int etoile_dans_mot = 0;

    for (int i = 0; i < my_strlen(mot_afficher); i++){
        if (mot_afficher[i] == '*')
            etoile_dans_mot=1;
    }
    if (!etoile_dans_mot){
        return 1;
    }
    else{
        return 0;
    }
}
