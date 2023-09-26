#ifndef MAIN_H
#define MAIN_H

char *_memset(char *S, char b, unsigned int n);
int _putchar(char c);
char *_mencpy(char *dest, char *Src, unsigned int n);
char * _strchr(char *S, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *S, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[a]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
