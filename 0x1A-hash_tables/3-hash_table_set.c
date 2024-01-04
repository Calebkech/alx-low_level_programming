#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @htbl: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *htbl, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (htbl == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, htbl->size);
	for (i = index; htbl->array[i]; i++)
	{
		if (strcmp(htbl->array[i]->key, key) == 0)
		{
			free(htbl->array[i]->value);
			htbl->array[i]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = htbl->array[index];
	htbl->array[index] = new;

	return (1);
}
