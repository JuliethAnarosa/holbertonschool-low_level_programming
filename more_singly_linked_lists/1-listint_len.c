#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: Pointer to a linked list
 *
 * Return: The number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nocounter = 0;

	for (; h; nocounter++)
		h = h->next;

	return (nocounter);
}
