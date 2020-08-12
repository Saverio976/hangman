/*
c041ng 8y Paradox
*/
#include "../include/hangman.h"

int main(){
    char secret_word[TAILLE_MAX];
    char hidden_word[TAILLE_MAX];

    char input[TAILLE_MAX];

    int nb_joker;
    bool replay = TRUE;

    while (replay){
        set_up_game(secret_word, hidden_word, input, &nb_joker);

        while(nb_joker > 0 && !is_end(hidden_word)){
            show_information_in_game(nb_joker, hidden_word);

            my_lecture(input, TAILLE_MAX);

            check(input, secret_word, hidden_word, &nb_joker);
        }

        show_information_end_game(secret_word, nb_joker);

        replay = is_replay();
    }

    return (0);
}
