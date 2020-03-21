#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked lists points to node struct
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count;

	current = h;
	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
