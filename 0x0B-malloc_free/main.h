#ifndef MAIN_H
#define MAIN_H
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
int _putchar(char c);
int _strlen(char *s);
void free_grid(int **grid, int height);
#endif
