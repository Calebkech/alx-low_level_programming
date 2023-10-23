#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int cont;

	if (*head == NULL)
		return (0);

	del = *head;
	cont = del->n;
	free(del);

	*head = (*head)->next;
	return (cont);
}