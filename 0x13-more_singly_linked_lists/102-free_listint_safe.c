#include "lists.h"

/**
* free_listint_safe - a function that rees a linked list
* @h: pointer to the first node in the linked list
* Return: number of elements in the freed list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current_node = *h;

	if (!h || !*h)
	{
		return (0);
	}

	while (current_node)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
		node_count++;
	}

	*h = NULL;

	return (node_count);
}

