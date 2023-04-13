#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Hash table's size
 * Return: Pointer to created hash table, or NULL if something wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **ret_array;

	new = calloc(1, sizeof(*ret));
	if (!new)
		return (NULL);

	ret_array = calloc(size, sizeof(*ret_array));
	if (!ret_array)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	new->array = ret_array;
	return (new);
}
