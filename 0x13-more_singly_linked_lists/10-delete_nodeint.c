#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodeToDelete = NULL;
	listint_t *previousNode = NULL;
	unsigned int i = 0, listLength = listint_len(*head);

	if ((index > listLength) || (listLength == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			nodeToDelete = *head;
			if (i == 0)
			{
				*head = nodeToDelete->next;
				free(nodeToDelete);
				return (1);
			}
			previousNode->next = nodeToDelete->next;
			free(nodeToDelete);
			return (1);
		}
		else if ((i + 1) == index)
			previousNode = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}