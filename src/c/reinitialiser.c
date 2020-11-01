/*
c041ng 8y Paradox

file to reinit all variables
*/
#include "../include/hangman.h"

void reinitialiser_tab(char *input, char *input_history){
    for (int i = 0; i < TAILLE_MAX; i++){
        input[i] = '\0';
        input_history[i] = '\0';
    }
}

void reinitialiser_int(int *nb_joker){
    *nb_joker = NB_DE_COUP;
}

void set_hidden_word(char *hidden_word, int len_word){
    for (int i = 0; i < len_word; i++)
        hidden_word[i] = '*';
}

void set_up_game1(char *secret_word, char *hidden_word, char *input, char *input_history, int *nb_joker){
    reinitialiser_tab(input, input_history);
    reinitialiser_int(nb_joker);

    get_mot(secret_word);

    set_hidden_word(hidden_word, my_strlen(secret_word));
}

void set_up_game2(char *secret_word, char *hidden_word, char *input, char *input_history, int *nb_joker){
    reinitialiser_tab(input, input_history);
    reinitialiser_int(nb_joker);

    set_hidden_word(hidden_word, my_strlen(secret_word));
}

void reinitialiser_secret_word(char *secret_word){
    for (int i = 0; i < TAILLE_MAX; i++){
        secret_word[i] = '\0';
    }
}
