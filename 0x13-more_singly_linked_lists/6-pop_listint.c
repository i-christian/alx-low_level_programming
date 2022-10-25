#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: parameter
 * Return: the first node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *rem = NULL;
	int data;

	if (*head == NULL)
		return (0);

	data = current->n;
	rem = current;
	current = current->next;
	free(rem);

	*head = current;

	return (data);
}
