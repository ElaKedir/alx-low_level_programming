#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: head node
 * Return: the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data;
	listint_t *temp;

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
