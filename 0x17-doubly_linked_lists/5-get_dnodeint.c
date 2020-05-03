#include "lists.h"

/**
 * get_dnodeint_at_index  - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of doubly LL
 * @index: index of node to return
 * Return: node at index n given, otherwise NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	for (; temp && count < index; temp = temp->next, count++)
		;

	if (temp)
		return (temp);

	return (NULL);
}
