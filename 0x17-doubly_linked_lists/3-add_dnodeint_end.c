#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @listHead: head of the list
 * @value: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **listHead, const int value)
{
	dlistint_t *currentHead;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->next = NULL;

	currentHead = *listHead;

	if (currentHead != NULL)
	{
		while (currentHead->next != NULL)
			currentHead = currentHead->next;
		currentHead->next = newNode;
	}
	else
	{
		*listHead = newNode;
	}

	newNode->prev = currentHead;

	return (newNode);
}
