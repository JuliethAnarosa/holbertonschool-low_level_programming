#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int n_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		n_elements++;
	}
	return (n_elements);
}
