# MY LIBRARY C
# Paradox
**I'm not a pro, plz don te judje mi!**


**Here are examples of how to recreate some of the library functions :**
- stdio
- string


####################################################################################################### Short list of functions :




# \\\ # \\\ # Theme 1: **conversion**


# int to str

char *my_inttostr(int number, char *tab);
    int number
    char *tab
convert <number> to string (char *tab)
Returns a pointer to <tab>


# str to int

int my_strtoint(char *tab);
    char *tab
converts a string containing only numbers into int.
and returns the number


# char to int

int my_chartoint(char c);
    char c
convert a character to an int (the character can come for example from my_lecture_one() and is taken in ascii)




# \\\ # \\\ # Theme 2: **file**


# closed

int my_close(int fd);
    int fd
closes the file concerned by the file descriptor
returns 0 if all went well


# delete

int my_delete(char *file_name);
    char *file_name
deletes the file given by its name in argument
returns 0 if all went well


# lseek

int my_lseek(int fd, int number, char *mode);
    int fd
    int number
    char *mode
moves the cursor of a file represented by its file descriptor
different modes:
- SEEK_SET -> shifts the cursor by taking as a starting point
the beginning of the file
- SEEK_CUR -> Shifts the cursor to the initial position.
- SEEK_END -> shift the cursor starting from the end
return -1 if there was an error;
the number of bytes from the beginning of the file to the cursor.


# open

int my_open(char *name_file, char *mode);
    char *name_file
    char *mode
opens the file and returns a file descriptor allowing to realize
actions on it.
different modes:
- r -> read only
- w -> write only (creates the file if it doesn't exist)
- rw -> read and write (creates the file if it doesn't exist)
return -1 if an error occurs

# read lines

int my_readlines(int fd, char *tab, int max);
    int fd
    char *tab
    int max
read a line from the file represented by the file descriptor.
To read all the lines of a file, use a while.
Returns 0 at the end of the file, or -1 in case of error.


# read all

int my_readall(int fd, char *tab, int max);
    int fd
    char *tab
    int max
reads the whole file if the given space of the string (max)
returns 0 if readall reads the whole file
the number of bytes read if there was not enough space available
and -1 in case of error


""" doesn't work so much...
# rename

int my_rename(char *old_name, char *new_name);
    char *old_name
    char *new_name
MEANING to change the file name
"""


# rewind

int my_rewind(int fd);
    int fd
puts the cursor at the beginning of the file
return 0 if all is in the right place
-1 if there was an error


# write char

int my_write_char(int fd, char c);
    int fd
    tank c
writes a letter in the file represented by the file descriptor
returns -1 if there is an error


# write str

int my_write_str(int fd, char *tab);
    int fd
    char *tab
writes the string to the <fd> file.
returns -1 if there is an error


# write int

int my_write_int(int fd, int number);
    int fd
    int number
writes a number to the file represented by fd
return -1 if there is an error




# \\\ # \\\ # Theme 3: **number**


# power

unsigned long long int my_pow(int number, int exponent);
    int number
    int exhibitor
the choice for the type is made like that because, some calculation gives very large numbers of
return 'number' superscript 'superscript'.




# \\\ # \\\ # heme 4: **std.in.out**


# input strings
void my_lecture(char *tab, int size_max);
    char *tab
    int max_size
modifies the char array given by the user in stdin
(similar to fgets because it only takes a defined number of characters)


# input character
void my_lecture_one(char *ptr_letter);
    char *ptr_letter
change the value pointed by 'ptr_letter' by a character entered in stdin


# print char
void print_char(char c);
    char c
displays a character in stdout


# print strings
void print_str(char *tab);
    char *tab
displays a string in stdout (a string must end in \0)


# print int
void print_nb(int number);
    int number
displays a string (the int is transformed into an ascii character)


# print bonus
void print1(char *tab, void *ptr_parameter);
    char *tab
    void *ptr_parameter
displays a string of characters, and if there is a
%s: takes the pointer as a pointer to a string and makes a print_str
%c: takes the pointer as a pointer to a character and makes a print_char
%d: takes the pointer as a pointer to a number and makes a print_nb
then continues the string




# \\\ # \\\ # Theme 5: **strings**


# str_cat
void my_strcat(char *tab1, char *tab2);
    char *tab1
    char *tab2
concatenates the character string 'tab1' and 'tab2' into 'tab1'.


# str_chr
char *my_strchr(char *tab, char letter);
    char *tab
    letter float
returns a pointer to the location of the indicated letter.
if there is none, return NULL


# str_cmp
int my_strcmp(char *tab1, char *tab2);
    char tab1[]
    char tab2[]
compares two character strings
return 1 if the two channels are not the same, 0 if they are.


# str_cpy
void my_strcpy(char *tab1, char *tab2);
    char tab1[]
    char tab2[]
copies the string 'tab2' to 'tab1'.


# str_len
int my_strlen(char *tab);
    char *tab
returns the length of the string (not including the \0)


# str_lower
char *my_strlower(char *tab);
    char *tab
puts upper case letters in lower case
returns a pointer to tab


# str_pbrk
char *my_strpbrk(char *tab, char *letters){
    char *tab
    char *letters
returns a pointer to the first letter found between all those in 'letters'.
return NULL if not found


# str_rev
void my_strrev(char *tab);
    char *tab
reverses the order of the character string


# str_str
char *my_strstr(char *tab1, char *tab2);
    char *tab1
    char *tab2
returns a pointer to the first letter of the occurrence 'tab2' to be searched in 'tab1'.
NULL referral if none exists


# str_upper
char *my_strupper(char *tab);
    char *tab
puts lowercase letters in uppercase
returns a pointer to tab




################################### Makefile

**1**
make help
displays this document



**2**
make help
display the french help document



**3**
make init
to create the library



**4**
make clean
if there are any .o files left



**5**
make fclean
to delete in addition to the .o (if any) the library



**6**
make use_libmy
Prerequisite:
-replace the variable NAME_OF_THE_PROG by the name of the file to compile
with the libmy library.
this line can also show you how to compile with a custom library

#Sorry about the spelling/ translation
<3 (╯°□°）╯︵ ┻━┻
