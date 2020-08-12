/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

int input_in_word(char *input, char *secret_word, char *hidden_word){
    bool is_input_in_secret_world = FALSE;

    for (int i = 0; i < my_strlen(secret_word); i++){
        if (input[0] == secret_word[i]){
            hidden_word[i] = input[0];
            is_input_in_secret_world = TRUE;
        }
    }
    return (is_input_in_secret_world);
}

bool is_end(char hidden_word[]){
    bool asterisk_in_hidden_word = FALSE;

    for (int i = 0; i < my_strlen(hidden_word); i++){
        if (hidden_word[i] == '*')
            asterisk_in_hidden_word = TRUE;
    }
    return (!asterisk_in_hidden_word);
}

void check(char *input, char *secret_word, char *hidden_word, int *ptr_nb_joker){
    if(!input_in_word(input, secret_word, hidden_word)){
        (*ptr_nb_joker)--;
        print1("\n%s n'est pas dans le mot\n", input);
    }
    else
        print1("\n%s est dans le mot\n", input);
}

void show_information_in_game(int nb_joker, char *hidden_word){
    print1("\nIl vous reste %d chance de ne pas trouver une lettre\n", &nb_joker);
    print1("Le mot à deviner est : %s\n", hidden_word);
    print_str("Quelle lettre voulez vous tester ? : ");
}

void show_information_end_game(char *secret_word, int nb_joker){
    print1("\nLe mot était : %s", secret_word);
    if (nb_joker == 0){
        print_str("\n\nVous avez PERDU");
        print_str("\nVoulez vous retenter votre chance ");
        print_str("pour ne pas terminer sur une défaite ?\n");
    }
    else{
        print_str("\n\nVous avez GAGNÉ");
        print_str("\nVoulez vous remettre votre titre de vainqueur en jeu ?");
    }
}

bool is_replay(){
    char answer;
    bool replay;

    do {
        print_str("\noui : 1\nnon : 0\n>>> ");
        my_lecture_one(&answer);
        replay = my_chartoint(answer);
    } while (replay != TRUE && replay != FALSE);
    return (replay);
}
