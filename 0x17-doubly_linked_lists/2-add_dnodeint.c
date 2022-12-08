#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create a new node*/
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/*test if the node was created*/
	if (newNode == NULL)
		return (NULL);

	/* assigning newNode's next as the current head*/
    /* Assign data & and make newNode's prev as NULL*/
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	 /* if list already had item(s)*/
    /*We need to make current head previous node as this new node*/
	if (*head != NULL)
		(*head)->prev = newNode;

	/*change head to this newNode*/
	*head = newNode;

	return (newNode);
}
