#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer to head of LL
 * @index: index of list where new node should be deleted
 * Return: 1 if success, otherwise -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current = *head;
	size_t count = 0;

	if (!*head)
		return (-1);

	if (!index)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (count < (index - 1))
	{
		if (!current)
			return (-1);
		current = current->next;
		count++;
	}
	temp = current->next->next;
	if (current->next->next)
		current->next->next->prev = current;
	free(current->next);
	current->next = temp;
	return (1);
}
