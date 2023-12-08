#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @listHead: head of the list
 * @value: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **listHead, const int value)
{
	dlistint_t *newNode;
	dlistint_t *currentHead;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->prev = NULL;
	currentHead = *listHead;

	if (currentHead != NULL)
	{
		while (currentHead->prev != NULL)
			currentHead = currentHead->prev;
	}

	newNode->next = currentHead;

	if (currentHead != NULL)
		currentHead->prev = newNode;

	*listHead = newNode;

	return (newNode);
}
