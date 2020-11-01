/*
c041ng 8y Paradox

generate a rendom number
*/
#include <stdlib.h>
#include "../include/hangman.h"


int gen_random(int max){
    int *nombre;
    nombre = malloc(0);
    free(nombre);
    int rand_number = ((unsigned long) nombre) % (max - 1 + 1) + 1;
    return (rand_number);
}
