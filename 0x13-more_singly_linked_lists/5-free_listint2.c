#include "lists.h"

/**
 * free_listint2 - frees a listint_t list then sets the head to NULL
 * @head: double pointer to head of listint_int
 */

void free_listint2(listint_t **head)
{
	listint_t *cur_ptr;
	listint_t *tmp;

	if (!head)
		return;

	cur_ptr = *head;
	while (cur_ptr)
	{
		tmp = cur_ptr;
		cur_ptr = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
