#include "lists.h"

/**
 * print_list - prints all the elements of the list
 * 
 * @h: pointer to the next list
 * 
 * Return: returns the number of nodes
*/

size_t print_list(const list_t *h)
{
    const list_t *loc = h;
    size_t count = 0;

    while (loc != NULL)
    {
        if (loc->str != NULL)
        {
            printf("[%d] %s\n", loc->len, loc->str);
        }
        else
        {
            printf("[0] (nil)\n");
        }
        loc = loc->next;
        count++;
    }
    
    return count;
}