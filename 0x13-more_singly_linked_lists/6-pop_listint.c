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
	int num;
	listint_t *temp;
    
	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
