#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    listint_t **pointers;
    unsigned int listLength = listint_len(head);
    size_t count = 0;

    pointers = malloc(sizeof(listint_t *) * listLength);
    if (pointers == NULL)
        exit(98);
    while (current != NULL)
    {
        if (check_pointer(current, pointers, listLength) == 0)
        {
            printf("[%p] %d\n", (void *)current, current->n);
        }
        else
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            break;
        }
        pointers[count] = (listint_t *)current;
        count++;
        current = current->next;
    }
    free(pointers);
    return count;
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

/**
 * check_pointer - checks if a pointer is in an array
 * @ptr: pointer to be checked
 * @array: array to be checked in
 * @size: size of the array
 *
 * Return: 1 on success, 0 on fail
 */
int check_pointer(const listint_t *ptr, listint_t **array, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        if (ptr == array[i])
            return 1;
    }
    return 0;
}