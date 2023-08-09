#ifndef _MAIN_H_
#define _MAIN_H_

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _putchar(char c);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
void free_word_array(char **word_array);
int count_words(char *str);
int is_whitespace(char c);

#endif