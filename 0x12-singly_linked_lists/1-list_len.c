#include <stdlib.h>
#include "lists.h"

/**
 * list_len - brimgs back the number of elements in a linked list
 * @h: pointer for list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
	h = h->next;
	}
	return (n);
}
