/*
c041ng 8y Paradox

main file that use all other file to run
*/
#include "../include/hangman.h"

int main(){
    char secret_word[TAILLE_MAX];
    char hidden_word[TAILLE_MAX];
    char input_history[TAILLE_MAX];

    char input[TAILLE_MAX];

    int nb_joker;
    bool replay = TRUE;
    bool is_one_player=TRUE;

    print_str("\nBienvenu Dans ce magnifique jeu du pendu !!!!\n");

    print_str("Vous aurez le choix entre ces différentes action réalisable dans l'ordre donné : \n");
    print_str("Effacer la base de donnée pour ajouter un par un vos propre mots\n");
    print_str("Ajouter des mots dans la base donnée de mot à chercher\n");
    print_str("Jouer\n");
    print_str("Jouer à 1 ou 2 joueurs\n");


    print_str("\nVoulez Vous : Effacer la base de donnée de mot");
    replay = is_replay();
    if (replay){
        suppr_all_words();
    }

    print_str("\nVoulez Vous : Ajouter des mots");
    replay = is_replay(); // la fonction is_replay renvoi un nombre entre 0 et 1 uniquement
    if (replay){
		add_word();
    }

    db_to_upper();
    suppr_empty();

    print_str("\nVoulez Vous : Jouer");
    replay = is_replay(); // la fonction is_replay renvoi un nombre entre 0 et 1 uniquement
    while (replay){
        reinitialiser_secret_word(secret_word);
        reinitialiser_secret_word(hidden_word);

        print_str("\nVoulez Vous : mode joueur");
        is_one_player = ft_is_one_player();

        if (is_one_player){
            set_up_game1(secret_word, hidden_word, input, input_history, &nb_joker);
        }
        else{
            print_str("\nVeuillez : entrer le mot à deviner \n>>> ");
            my_lecture(secret_word,TAILLE_MAX);
            my_strupper(secret_word);
            set_up_game2(secret_word, hidden_word, input, input_history, &nb_joker);
            print_str("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            print_str("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            print_str("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            print_str("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }

        while(nb_joker > 0 && !is_end(hidden_word)){
            show_information_in_game(nb_joker, hidden_word, input_history);

            my_lecture(input, TAILLE_MAX);

            my_strupper(input); // always compare upper word / letter

            if (my_strlen(input) == 1){

                if (my_strchr(input_history, input[0]) != NULL){
                    print_str("\nVous avez déjà demandé cette lettre\n");
                }
                else {
                    input_history[my_strlen(input_history)] = input[0];
                    input_history[my_strlen(input_history)] = '\0';

                    check(input, secret_word, hidden_word, &nb_joker);
                }

            }
            else {
                check(input, secret_word, hidden_word, &nb_joker);
            }
        }

        show_information_end_game(secret_word, nb_joker);

        replay = is_replay();
    }

    return (0);
}
