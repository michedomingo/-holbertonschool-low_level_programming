#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to head node
 * @n: value to store in node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	newNode->prev = temp;
	temp->next = newNode;

	return (newNode);
}
