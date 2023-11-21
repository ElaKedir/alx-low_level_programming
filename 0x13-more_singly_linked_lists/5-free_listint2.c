#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: node pointer
 * Return: nothing
*/


void free_listint2(listint_t **head)
{
	listint_t *next_node;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	*head = NULL;
}
