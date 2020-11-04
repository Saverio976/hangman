/*
c041ng 8y Paradox

pick a random word
*/
#include "../include/hangman.h"

char *get_mot(char *secret_word){
    int file;
    int words_number = 0;
    int random_number = 0;

    file = my_open("./src/data/mot","r");
    if (file == -1)
        return (NULL);

    while (my_readline(file, secret_word, TAILLE_MAX))
        words_number++;

    random_number = gen_random(words_number);

    my_close(file);
    file = my_open("./src/data/mot", "r");
    if (file == -1)
        return (NULL);

    for (int i = 0; i < words_number && i != random_number; i++)
        my_readline(file, secret_word, TAILLE_MAX);

    my_close(file);

    return (secret_word);
}
