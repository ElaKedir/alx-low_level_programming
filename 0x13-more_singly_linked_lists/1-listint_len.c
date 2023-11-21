#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t lis
 * @h: node
 * Return: he number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
