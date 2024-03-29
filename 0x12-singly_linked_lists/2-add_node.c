#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: returns the address to the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
    char *loc;
    int len;
    list_t *add;

    add = malloc(sizeof(list_t));
    if (add == NULL)
    {
        return NULL;
    }
    loc = strdup(str);
    if (loc == NULL)
    {
        free(add);
        return NULL;
    }
    for (len = 0; str[len]; len++)
    {
        ;
    }

    add->str = loc;
    add->len = len;
    add->next = *head;

    *head = add;

    return add;
}