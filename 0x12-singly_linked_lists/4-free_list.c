#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the linked list.
 *
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

