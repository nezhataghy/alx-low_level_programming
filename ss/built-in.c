#include "main.h"

void print_env()
{
    size_t i = 0;

    while (environ[i])
    {
        write(1, environ[i], _strlen(environ[i]));
        write(1, "\n", 1);
        i++;
    }
}
/*
void print_env()
{
    int m = 0, n;

    while (environ[m])
    {
        for (n = 0; environ[m][n] != '\0'; n++)
            write(1, &environ[m][n], 1);
        write(1, "\n", 1);
        m++;
    }
}
*/
void b_in_exit(char **argv)
{
    int statut;

    if (argv[1])
    {
        if (_atoi(argv[1]) < 0)
            exit(2);

        statut = _atoi(argv[1]);
        exit(statut);
    }
    exit(0);
}
