#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head of doubly LL
 * Return: sum of integers in list, otherwise 0 if LL is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
