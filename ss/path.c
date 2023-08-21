#include "main.h"

noeud *creer_path_linked_list()
{
    char *directory = NULL;
    char *path = NULL, *path_copy = NULL;
    noeud *head = NULL, *last_ptr = NULL;

    path = getenv("PATH");
    path_copy = strdup(path);

    directory = strtok(path_copy, "=:");

    while (directory != NULL)
    {
        noeud *new_n = (noeud *)malloc(sizeof(noeud));
        if (new_n == NULL)
            return (NULL);

        new_n->dir = strdup(directory);
        new_n->next = NULL;

        if (head)
        {
            last_ptr->next = new_n;
            last_ptr = new_n;
        }
        else
        {
            head = new_n;
            last_ptr = new_n;
        }

        directory = strtok(NULL, ":");
        if (directory == NULL)
            break;
    }

    free(path_copy);
    return (head);
}

void free_path_list(noeud *head, char *check_path)
{
    noeud *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp->dir);
        free(tmp);
    }

    if (check_path != NULL)
    {
        /*free(check_path);*/
    }
}

char *search_pathname(char *arg)
{
    char *result = NULL;

    char *check_path = (char *)malloc(100);
    if (check_path == NULL)
    {
        perror("Memory allocation error");
        return (NULL);
    }

    if (access(arg, X_OK) != 0)
    {
        struct stat st;
        noeud *path_list = creer_path_linked_list();
        noeud *head = path_list;

        while (path_list != NULL)
        {
            strcpy(check_path, path_list->dir);
            strcat(check_path, "/");
            strcat(check_path, arg);
            if (!(stat(check_path, &st)))
            {
                result = strdup(check_path);
                /*free check_path */
                free(check_path);
                break;
            }
            path_list = path_list->next;
        }

        if (result == NULL)
        {
            free(check_path);
        }

        free_path_list(head, NULL);
    }
    else
    {
        result = arg;
        free(check_path);
    }

    return (result);
}
