#include "lists.h"

/**
 * insert_nodeint_at_index - It inserts a new node in a linked list,
 * at given position
 * @head: points at the first node in the list
 * @idx: index where new node is added
 * @n: data to be inserted in the new node
 *
 * Return: Pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (d = 0; temp && d < idx; d++)
	{
		if (d == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

