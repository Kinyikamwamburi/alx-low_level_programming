#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: Pointer to list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
