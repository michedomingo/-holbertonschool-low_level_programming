#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to head of listint_t
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *cur_ptr;
	int num;

	if (!head || !(*head))
		return (0);

	num = (*head)->n;

	cur_ptr = *head;
	*head = (*head)->next;
	free(cur_ptr);

	return (num);
}
