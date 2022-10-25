#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node to the end
 *					  of the linked list
 * @head: parameter
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *final = NULL;

	/*allocate memory for a new node*/
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	/*set the next pointer of the current last node to point at the*/
	 /* new node, and the newNode's next to NULL*/
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;

	else
	{
		final = *head;
		while (final->next != NULL)
			final = final->next;

		/*add the new node here*/
		final->next = newNode;
	}

	return (*head);

}
