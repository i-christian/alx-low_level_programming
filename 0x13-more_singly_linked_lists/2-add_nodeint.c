#include "lists.h"

/**
 * add_nodeint - a function that adds a node to the list
 * @head: parameter
 * @n: parameter
 * Return: The address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	const int data = n;

	/* allocate space for the new node*/
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = data;

	/*set the next pointer of the new node to point to the current first*/
	newNode->next = *head;
	/*change the head pointer to point to the new node*/
	*head = newNode;

	return (*head);
}
