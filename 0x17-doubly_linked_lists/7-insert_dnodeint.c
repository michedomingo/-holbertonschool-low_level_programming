#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of LL
 * @idx: index of list where new node should be added, starts at 0
 * @n: value to store in new node
 * Return: add of new node, otherwise NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode = malloc(sizeof(dlistint_t));
	size_t count = 0;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (!h)
		return (newNode);

	temp = *h;
	if (idx == 0)
	{
		newNode->next = temp;
		temp->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (count != (idx - 1))
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	if (!temp->next)
		temp->next = newNode;
	else
	{
		temp->next->prev = newNode;
		temp->next = newNode;
	}
	return (newNode);
}
