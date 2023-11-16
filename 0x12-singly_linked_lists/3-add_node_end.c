#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the linked list.
 * @str: new string to store in the list.
 *
 * Return: the address of the head or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	new->len = len;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

