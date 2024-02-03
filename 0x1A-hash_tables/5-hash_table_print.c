#include "hash_tables.h"

/**
 * hash_table_print - A function that prints the keys and
 * values of the hash table
 *
 * @ht: the pointer to the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (j = 0; j < ht->size; j++)
	{
		tmp = ht->array[j];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
