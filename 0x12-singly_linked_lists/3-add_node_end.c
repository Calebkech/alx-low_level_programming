#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: NULL in case of failure or address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
    char *loc;
    int i;
    list_t *add, *last;

    add = malloc(sizeof(list_t));
    if (add == NULL)
        return (NULL);

    loc = strdup(str);
    if (loc == NULL)
    {
        free(add);
        return (NULL);
    }

    for (i = 0; str[i]; i++)
        ;

    add->str = loc;
    add->len = i;
    add->next = NULL;

    if (*head == NULL)
        *head = add;
    else
    {
        last = *head;
        while (last->next != NULL)
            last = last->next;
        last->next = add;
    }
    return (*head);
}