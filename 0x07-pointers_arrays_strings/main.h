#ifndef MAIN_H
#define MAIN_H

/**
* void prototypes()
* int prototypes()
*/

char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*a)[8]);

#endif /*MAIN_H*/
