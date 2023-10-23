#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curs;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			curs = *head;
			free(curs);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}