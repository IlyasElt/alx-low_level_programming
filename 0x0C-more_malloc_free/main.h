#ifndef MAIN__H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *argstostr(int ac, char **av);
void ch_free_grid(char **grid, unsigned int height);
char **strtow(char *str);

#endif /* MAIN_H */