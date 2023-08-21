#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>

extern char **environ;

typedef struct node
{
    char *dir;
    struct node *next;
} noeud;

int _atoi(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
void print_env();
char **parsing(char *buffer, const char *separateur);
void execute(char **argv, char *arg);

noeud *creer_path_linked_list();
char *search_pathname(char *arg);
void free_list(noeud *head);
void free_grid(char **argv);
void b_in_exit(char **argv);

#endif
