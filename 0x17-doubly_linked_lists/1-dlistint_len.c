#include "lists.h"

/**
 * dlistint_len - counts number of elements in a list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}

	return (len);
}
