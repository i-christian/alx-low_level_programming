#include "lists.h"

/**
 * free_listint2 - function frees the listint
 * @head: parameter
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *rem = NULL;

	/*check if head is null*/
	if (head == NULL)
		return;

	/*if head isn't NULL free the linked list first*/
	while (current != NULL)
	{
		rem = current;
		current = current->next;
		free(rem);
	}

	*head = current;

	head = NULL;
}
