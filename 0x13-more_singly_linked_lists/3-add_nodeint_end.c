#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of listint_t
 * @n: integer value to store in new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = NULL;

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (new)
		new->next = tmp;
	else
		*head = tmp;

	return (new);
}
