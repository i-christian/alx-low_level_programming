#include "lists.h"

/**
 * free_listint - frees the list
 * @head: the parameter
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *rem = NULL;

	while (current != NULL)
	{
		rem = current;
		current = current->next;
		free(rem);
	}
}
