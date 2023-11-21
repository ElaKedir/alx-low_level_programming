#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list
 * @h: node
 * Return: the number of nodes
*/


size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		int num = h->n;

		if (num == 0)
		{
			_putchar('0');
		}
		else if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		while (num > 0)
		{
			int digit = num % 10;

			_putchar(digit + '0');
			num /= 10;
		}

		_putchar('\n');
		h = h->next;
		n++;
	}
return (n);
}
