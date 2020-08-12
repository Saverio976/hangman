/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

void reinitialiser_tab(char *secret_word, char *hidden_word, char *input){
    for (int i = 0; i < TAILLE_MAX; i++){
        secret_word[i] = '\0';
        hidden_word[i] = '\0';
        input[i] = '\0';
    }
}

void reinitialiser_int(int *nb_joker){
    *nb_joker = NB_DE_COUP;
}

void set_hidden_word(char *hidden_word, int len_word){
    for (int i = 0; i < len_word; i++)
        hidden_word[i] = '*';
}

void set_up_game(char *secret_word, char *hidden_word, char *input, int *nb_joker){
    reinitialiser_tab(secret_word, hidden_word, input);
    reinitialiser_int(nb_joker);

    get_mot(secret_word);

    set_hidden_word(hidden_word, my_strlen(secret_word));
}
