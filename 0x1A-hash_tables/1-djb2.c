#include "hash_tables.h"

/**
 * hash_djb2 - A function that generates a random number through
 * a string given that is hash number
 *
 * @str: string
 * Return: hash number
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int j;

	hash = 5381;
	while ((j = *str++))
	{
		hash = ((hash << 5) + hash) + j; /* hash * 33 + j */
	}
	return (hash);
}
