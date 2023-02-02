#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: pointer to store the first address of the node
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
