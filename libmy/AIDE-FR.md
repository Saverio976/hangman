# MA BIBLIOTHÈQUE C
# Paradox
**Je ne suis pas un pro, plz don te judje mi!**


**Voici des exemples permettant de recréer certaines fonction de la bibliothèque :**
- stdio
- string


####################################################################### Petite liste des fonctions :




# \\ # \\ # Thème 1 : **conversion**


# int to str

char *my_inttostr(int number, char *tab);
    int number
    char *tab
converti <number> en chaine de caractère (char *tab)
Renvoi un pointeur sur <tab>


# str to int

int my_strtoint(char *tab);
    char *tab
converti une chaine de caractère contenant que des nombre, en int.
et renvoi le nombre


# char to int

int my_chartoint(char c);
    char c
converti un charactere en un int (le charactere peut venir par exemple du my_lecture_one() et il est prit en ascii)




# \\ # \\ # Thème 2 : **fichier**


# close

int my_close(int fd);
    int fd
ferme le fichier concerné par le file descriptor
retourne 0 si tous s'est bien passé


# delete

int my_delete(char *file_name);
    char *file_name
supprime le fichier donner par son nom en argument
retourne 0 si tous s'est bien passé


# lseek

int my_lseek(int fd, int number, char *mode);
    int fd
    int number
    char *mode
déplace le curseur d'un fichier représenté par son file descriptor
differents modes :
- SEEK_SET -> décale le curseur en prenant comme point de départ
le debut du fichier
- SEEK_CUR -> decale le curseur par rapport à la position initiale
- SEEK_END -> decale le curseur en commançant par la fin
renvoi -1 si il y a eu une erreur;
le nombre de byte depuis le début du fichier jusqu'au curseur


# open

int my_open(char *name_file, char *mode);
    char *name_file
    char *mode
ouvre le fichier et renvoi un file descriptor permettant de réaliser
des actions dessus.
differents modes :
- r -> lecture seulement
- w -> ecriture seulement (créé le fichier si il n'éxiste pas)
- rw -> lecture et écriture (créé le fichier si il n'éxiste pas)
renvoi -1 si une erreur survient

# read lines

int my_readlines(int fd, char *tab, int max);
    int fd
    char *tab
    int max
lis une ligne du fichier représenté par le file descriptor.
Pour lire toutes les lignes d'un fichier, utiliser un while.
Retourne 0 à la fin du fichier, ou -1 en cas d'erreur.


# read all

int my_readall(int fd, char *tab, int max);
    int fd
    char *tab
    int max
lis tout le fichier si l'espace donner de la chaine de caractère (max)
retourne 0 si readall lis tout le fichier
le nombre de byte lu si l'espace disponible n'a pas été suffisant
et -1 en cas d'erreur


""" ne marche pas tellement..
# rename

int my_rename(char *old_name, char *new_name);
    char *old_name
    char *new_name
SENSÉ modifier le nom du fichier
"""


# rewind

int my_rewind(int fd);
    int fd
met le curseur au debut du fichier
renvoi 0 si tous s'est bien placé
-1 s il y a euune erreur


# write char

int my_write_char(int fd, char c);
    int fd
    char c
écrit une lettre dans le fichier représenté par le file descriptor
retourne -1 si il y a une erreur


# write str

int my_write_str(int fd, char *tab);
    int fd
    char *tab
écrit la chaine de caractere dans le fichier <fd>
retourne -1 si il y a une erreur


# write int

int my_write_int(int fd, int number);
    int fd
    int number
écit un nombre dans le fichier représenté par fd
renvoi -1 si il y une erreur




# \\ # \\ # Thème 3 : **nombre**


# power

unsigned long long int my_pow(int nombre, int exposant);
    int nombre
    int exposant
le choix pour le type est fait comme ça car, certain calcul donne de très grand nombre
renvoi 'nombre' exposant 'exposant'




# \\ # \\ # Thème 4 : **std.in.out**


# input strings
void my_lecture(char *tab, int taille_max);
    char *tab
    int taille_max
modifie le tableau de char donné par ce que donne l'utilisateur dans stdin
(similaire à fgets car il ne prend qu'un nombre défini de caractère)


# input charactere
void my_lecture_one(char *ptr_letter);
    char *ptr_letter
modifie la valeur pointé par 'ptr_letter' par un caractère entré dans stdin


# print char
void print_char(char c);
    char c
affiche un caractère dans stdout


# print strings
void print_str(char *tab);
    char *tab
affiche une chaine de caractere dans stdout (une chaine de caractère doit terminer par \0)


# print int
void print_nb(int number);
    int number
affiche une chaîne de caractère (le int est transformé en caractère ascii)


# print bonus
void print1(char *tab, void *ptr_parametre);
    char *tab
    void *ptr_parametre
affiche une chaine de caractère, et si il y a parmis elle un
%s : prend le pointeur comme un pointeur sur une chaine de caractère et fait un print_str
%c : prend le pointeur comme un pointeur sur un caractère et fait un print_char
%d : prend le pointeur comme un pointeur sur un nombre et fait un print_nb
puis continu la chaîne de caractère




# \\ # \\ # Thème 5 : **strings**


# str_cat
void my_strcat(char *tab1, char *tab2);
    char *tab1
    char *tab2
concatène la chaine de caractere 'tab1' et 'tab2' dans 'tab1'


# str_chr
char *my_strchr(char *tab, char letter);
    char *tab
    char letter
retourne un pointeur sur l'endroit où il y a la lettre indiquée
si il n'y en a pas, retourne NULL


# str_cmp
int my_strcmp(char *tab1, char *tab2);
    char tab1[]
    char tab2[]
compare deux chaine de caractere
renvoi 1 si les deux chaînes ne sont pas pareil, 0 si elle le sont


# str_cpy
void my_strcpy(char *tab1, char *tab2);
    char tab1[]
    char tab2[]
copie la chaine de caractère 'tab2' dans 'tab1'


# str_len
int my_strlen(char *tab);
    char *tab
renvoi la longueur de la chaîne de caractère (sans compter le \0)


# str_lower
char *my_strlower(char *tab);
    char *tab
met les lettres majuscules en minuscule
retourne un pointeur sur tab


# str_pbrk
char *my_strpbrk(char *tab, char *letters){
    char *tab
    char *letters
renvoi un pointeur sur la première lettre trouvée entre toutes celles dans 'letters'
renvoi NULL si non trouvé


# str_rev
void my_strrev(char *tab);
    char *tab
inverse l'ordre de la chaine de caractere


# str_str
char *my_strstr(char *tab1, char *tab2);
    char *tab1
    char *tab2
renvoi un pointeur sur la première lettre de l'occurrence 'tab2' à chercher dans 'tab1'
renvoi NULL si il n'y en a pas


# str_upper
char *my_strupper(char *tab);
    char *tab
met les lettres minuscules en majuscule
retourne un pointeur sur tab




################################### Makefile

**1**
make help
affiche le document d'aide anglais



**2**
make aide
affiche ce document



**3**
make init
pour créer la bibliothèque



**4**
make clean
si il reste des fichier .o



**5**
make fclean
pour supprimer en plus des .o (si il y en a) la bibliotheque



**6**
make use_libmy
prérequis :
-remplacer la variable NAME_OF_THE_PROG par le nom du fichier à compiler
avec la bibliothèque libmy.
cette ligne peut aussi vous montrer comment compiler avec une bibliothèque perso

#désolé pour l'orthographe
<3 (╯°□°）╯︵ ┻━┻
