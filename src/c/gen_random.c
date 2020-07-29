/*
c041ng 8y Paradox
*/
#include <time.h>
#include <stdlib.h>
#include "../include/hangman.h"


int gen_random(int max){
    srand(time(NULL));

    return ((rand() % ( (max - 1) - 1) ) + 1);
}
