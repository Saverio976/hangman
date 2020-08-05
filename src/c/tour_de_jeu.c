/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

int lettre_in_word(char *input, char *mot_a_deviner, char *mot_afficher, int nb_coup){
    bool lettre_dans_mot_cacher = FALSE;

    if (my_strlen(mot_a_deviner) == my_strlen(input)){
        if (!my_strcmp(mot_a_deviner, input)){
            my_strcpy(mot_afficher, mot_a_deviner);
            lettre_dans_mot_cacher = TRUE;
        }
    }

    for (int i = 0; i < my_strlen(mot_a_deviner);i++){
        if (input[0] == mot_a_deviner[i]){
            mot_afficher[i] = input[0];
            lettre_dans_mot_cacher = TRUE;
        }
    }

    if (!lettre_dans_mot_cacher)
        nb_coup--;

    return (nb_coup);
}

int fin(char mot_afficher[]){
    bool etoile_dans_mot = FALSE;

    for (int i = 0; i < my_strlen(mot_afficher); i++){
        if (mot_afficher[i] == '*')
            etoile_dans_mot = TRUE;
    }
    if (!etoile_dans_mot){
        return 1;
    }
    else{
        return 0;
    }
}
