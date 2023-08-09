#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int len(char *str);
int num_words(char *str);

#endif /* MAIN_H */
