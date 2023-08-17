#include "lists.h"

/**
 * dlistint_len - it returns num of elements in
 * A double linked list
 *
 * @h: the head of list
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
