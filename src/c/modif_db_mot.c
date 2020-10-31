/*
c041ng 8y Paradox

fonction to modif file mot
*/
#include "../include/hangman.h"

int db_to_upper(){
    int file1, file2;
	char tab[TAILLE_MAX];

	file1 = my_open("./src/data/mot", "r");
	if (file1 == -1)
		return (1);

	file2 = my_open("tmp", "w");
	if (file2 == -1)
		return (1);

	while (my_readline(file1, tab, TAILLE_MAX) > 0){
		my_strupper(tab);
		my_write_str(file2, tab);
		//my_write_char(file2, '\n');
	}

	my_close(file1);
	my_close(file2);
	my_delete("./src/data/mot");

	file1 = my_open("tmp", "r");
	if (file1 == -1)
		return (1);

	file2 = my_open("./src/data/mot", "w");
	if (file2 == -1)
		return (1);

	while (my_readline(file1, tab, TAILLE_MAX) > 0){
		my_write_str(file2, tab);
		//my_write_char(file2, '\n');
	}

	my_close(file1);
	my_close(file2);
	my_delete("tmp");

    return (0);
}

int add_word(){
    int file = my_open("./src/data/mot", "a");
    char tab[TAILLE_MAX];
    if (file == -1){
        return (1);
    }
    while (my_strcmp(tab, "quit_q")) {
        print_str("Veuillez entrer le mot à ajouter ('quit_q' pour arreter)\n");
        my_lecture(tab, TAILLE_MAX);
        if (my_strcmp(tab, "quit_q")){
            my_write_char(file, '\n');
            my_write_str(file, tab);
        }
    }
    my_write_char(file, '\n');
    my_close(file);
    return (0);
}

int suppr_empty(){
    int file1, file2;
	char tab[TAILLE_MAX];

	file1 = my_open("./src/data/mot", "r");
	if (file1 == -1)
		return (1);

	file2 = my_open("tmp", "w");
	if (file2 == -1)
		return (1);

	while (my_readline(file1, tab, TAILLE_MAX) > 0){
		if (tab[0] != '\n'){
            my_write_str(file2, tab);
    		//my_write_char(file2, '\n');
        }
	}

	my_close(file1);
	my_close(file2);
	my_delete("./src/data/mot");

	file1 = my_open("tmp", "r");
	if (file1 == -1)
		return (1);

	file2 = my_open("./src/data/mot", "w");
	if (file2 == -1)
		return (1);

	while (my_readline(file1, tab, TAILLE_MAX) > 0){
		my_write_str(file2, tab);
		//my_write_char(file2, '\n');
	}

	my_close(file1);
	my_close(file2);
	my_delete("tmp");

    return (0);

}

int suppr_all_words(){
    int file;
    if (file == -1){
        return(1);
    }

    my_delete("./src/data/mot");
    file = my_open("./src/data/mot", "w");
    my_close(file);

    return (0);
}
