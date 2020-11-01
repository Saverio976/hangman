#ifndef __MY_LIB_H__


#define __MY_LIB_H__

#include <unistd.h>
#define TAILLE_MAX  100

// Conversion
char *my_inttostr(int number, char *tab);

int my_strtoint(char *tab);

int my_chartoint(char c);


// file
int my_close(int fd);

int my_open(char *name_file, char *mode);

int my_readline(int fd, char *tab, int max);

int my_readall(int fd, char *tab, int max);

int my_rewind(int fd);

int my_write_char(int fd, char c);

int my_write_str(int fd, char *tab);

int my_write_int(int fd, int number);

int my_lseek(int fd, int number, char *mode);

int my_rename(char *odl_name, char *new_name);

int my_delete(char *file_name);


// Number
int my_pow(int nombre, int exposant);
unsigned long long int my_hard_pow(int nombre, int exposant);


// Std.in.out
void my_lecture(char *tab, int taille_max);

void my_lecture_one(char *ptr_letter);

void print_char(char c);

void print_str(char *tab);

void print_nb(int number);

void print1(char *tab, void *ptr_parametre);


// Strings
void my_strcat(char *tab1, char *tab2);

char *my_strchr(char *tab, char letter);

int my_strcmp(char *tab1, char *tab2);

void my_strcpy(char *tab1, char *tab2);

int my_strlen(char *tab);

char *my_strpbrk(char *tab, char *letters);

void my_strrev(char *tab);

char *my_strstr(char *tab1, char *tab2);

char *my_strupper(char *tab);

char *my_strlower(char *tab);


#endif
