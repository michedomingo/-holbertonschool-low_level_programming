#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to head node
 * @n: value to store in node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	}
	temp = *head;
	newNode->next = temp;
	temp->prev = newNode;
	*head = newNode;

	return (newNode);
}
