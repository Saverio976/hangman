#ifndef __MY_LIB_H__


#define __MY_LIB_H__

#include <unistd.h>


// Conversion
char *my_inttostr(int number, char tab[]);

int my_strtoint(char tab[]);


// file
int my_close(int fd);

int my_open(char *name_file, char *mode);

int my_readlines(int fd, char *tab, int max);

int my_readall(int fd, char *tab, int max);

int my_rewind(int fd, char *file_name, char *mode);

void my_write_one(int fd, char c);

void my_write(int fd, char *tab);


// Number
unsigned long long int my_pow(int nombre, int exposant);

int my_readall(int fd, char *tab, int max);

void my_write_one(int fd, char c);

void my_write(int fd, char *tab);

int my_rewind(int fd, char *file_name, char *mode);


// Std.in.out
void my_lecture(char tab[], int taille_max);

void my_lecture_one(char *ptr_letter);

void print_char(char c);

void print_str(char *tab);

void print_nb(int number);

void print1(char *tab, void *ptr_parametre);


// Strings
void my_strcat(char tab1[], char tab2[]);

char *my_strchr(char tab[], char letter);

int my_strcmp(char tab1[], char tab2[]);

void my_strcpy(char tab1[], char tab2[]);

int my_strlen(char tab[]);

char *my_strpbrk(char tab[], char letters[]);

void my_strrev(char tab[]);

char *my_strstr(char tab1[], char tab2[]);


#endif
