/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

char *get_mot(char *mot_a_deviner){
    int fichier;
    int nombre_de_mot = 0;
    int nombre_mystere = 0;

    fichier = my_open("./src/data/mot","r");
    if (fichier != -1){

        while (my_readlines(fichier, mot_a_deviner, TAILLE_MAX)){
            nombre_de_mot++;
        }

        nombre_mystere = gen_random(nombre_de_mot);

        fichier = my_rewind(fichier, "./src/data/mot", "r");

        for (int i = 0; i < nombre_de_mot && i != nombre_mystere; i++)
            my_readlines(fichier, mot_a_deviner, TAILLE_MAX);

        my_close(fichier);

        return (mot_a_deviner);
    }
    return (NULL);
}
