#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: paramter
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		nodes++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (nodes);
}
