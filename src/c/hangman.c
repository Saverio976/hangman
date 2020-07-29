/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

int main(){
    char mot_a_deviner[TAILLE_MAX];
    char mot_afficher[TAILLE_MAX];

    char input[TAILLE_MAX];

    int nombre_coup_restant;
    int rejouer = 1;

    while (rejouer){
        reinitialiser_tab(mot_a_deviner, mot_afficher, input);
        reinitialiser_int(&nombre_coup_restant);

        get_mot(mot_a_deviner);

        for (int i = 0; i < my_strlen(mot_a_deviner); i++)
            mot_afficher[i] = '*';

        while (nombre_coup_restant > 0 && !fin(mot_afficher)){
            print1("\nIl vous reste %d chance de ne pas trouver une lettre\n", &nombre_coup_restant);
            print1("Le mot à deviner est : %s\n",mot_afficher);
            print_str("Quelle lettre voulez vous tester ? : ");

            my_lecture(input, TAILLE_MAX);

            nombre_coup_restant = lettre_in_word(input, mot_a_deviner, mot_afficher, nombre_coup_restant);

        }
        print1("\nLe mot était : %s", mot_a_deviner);
        if (nombre_coup_restant == 0)
            print_str("\n\nVous avez PERDU\n");
        else
            print_str("\n\nVous avez GAGNÉ\n");

        print_str("\nVoulez vous retenter votre chance ?");
        do {
            print_str("\noui : 1\nnon : 0\n>>> ");
            my_lecture(mot_afficher, TAILLE_MAX);
            rejouer = my_strtoint(mot_afficher);
        } while (rejouer != 0 && rejouer != 1);

        print_char('\n');
    }

    print_str("Au revoir et à la prochaine fois !\n");

    return (0);
}
