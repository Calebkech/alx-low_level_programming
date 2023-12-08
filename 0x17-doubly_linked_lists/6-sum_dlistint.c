#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @listHead: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *listHead)
{
	int totalSum;

	totalSum = 0;

	if (listHead != NULL)
	{
		while (listHead->prev != NULL)
			listHead = listHead->prev;

		while (listHead != NULL)
		{
			totalSum += listHead->n;
			listHead = listHead->next;
		}
	}

	return (totalSum);
}
