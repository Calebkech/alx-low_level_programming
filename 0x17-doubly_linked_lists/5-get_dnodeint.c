#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @listHead: head of the list
 * @targetIndex: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *listHead, unsigned int targetIndex)
{
	unsigned int currentIndex;

	if (listHead == NULL)
		return (NULL);

	while (listHead->prev != NULL)
		listHead = listHead->prev;

	currentIndex = 0;

	while (listHead != NULL)
	{
		if (currentIndex == targetIndex)
			break;
		listHead = listHead->next;
		currentIndex++;
	}

	return (listHead);
}
