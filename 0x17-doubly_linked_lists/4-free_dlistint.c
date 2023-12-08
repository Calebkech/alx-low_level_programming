#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @listHead: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *listHead)
{
	dlistint_t *tempNode;

	if (listHead != NULL)
		while (listHead->prev != NULL)
			listHead = listHead->prev;

	while ((tempNode = listHead) != NULL)
	{
		listHead = listHead->next;
		free(tempNode);
	}
}
