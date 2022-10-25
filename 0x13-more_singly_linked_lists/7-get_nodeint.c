#include "lists.h"

/**
 * get_nodeint_at_index - see return description
 * @head: parameter
 * @index: parameter
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *current = head;

	while (node < index)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
		node++;
	}

	head = current;

	return (head);
}
