#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	i = *head;

	if (i != NULL)
	{
		while (i->prev != NULL)
			i = i->prev;
	}

	new->next = i;

	if (i != NULL)
		i->prev = new;

	*head = new;

	return (new);
}
