#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * with a given size
 *
 * @size: Size of the hash table
 * Return: the created hash table, or NULL if the function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	while (i < size)
	{
	    array[i] = NULL;
	    i++;
	}

	table->array = array;
	table->size = size;

	return (table);
}
