#include "lists.h"

/**
 * listint_len - computes the length of a linked list
 * @h: parameter
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
