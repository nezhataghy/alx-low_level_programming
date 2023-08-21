#include "main.h"

void execute(char **argv, char *arg)
{
    __pid_t id;

    id = fork();
    if (!id)
    {

        if (execve(arg, argv, NULL) == -1)
        {
            perror("./shell");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait(NULL);
    }
}
