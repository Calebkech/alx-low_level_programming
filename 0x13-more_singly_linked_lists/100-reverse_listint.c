#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: the first node of the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentNode = NULL;
	listint_t *previousNode = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		currentNode = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = currentNode;
	}
	*head = previousNode;
	return (*head);
}