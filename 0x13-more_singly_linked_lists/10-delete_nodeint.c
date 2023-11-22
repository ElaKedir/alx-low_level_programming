#include "lists.h"

/**
 * delete_nodeint_at_index - afunction that deletes a node in a linked
 * list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node = NULL;
	listint_t *current_node = *head;
	unsigned int current_index = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node && current_index < index)
	{
		if (!current_node)
		{
			return (-1);
		}

		previous_node = current_node;
		current_node = current_node->next;
		current_index++;
	}

	if (!current_node)
	{
		return (-1);
	}

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}

