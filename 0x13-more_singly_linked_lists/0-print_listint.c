#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints out all the elements of the listint_t list
 * @h: a singly linked ;list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
