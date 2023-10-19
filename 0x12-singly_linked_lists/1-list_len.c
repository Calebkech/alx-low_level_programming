#include "lists.h"

/**
 * list_len - find the number of fecet in the linked-list
 * @h: pointer to the list
 * Return: returns the number of fecet
*/
size_t list_len(const list_t *h)
{
    size_t fecet = 0;
    while (h)
    {
        fecet++;
        h = h->next;
    }
    return fecet;
}