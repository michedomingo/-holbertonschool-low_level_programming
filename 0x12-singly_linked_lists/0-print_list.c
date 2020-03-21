#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of linked lists points to node struct
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		c++;
	}
	return (c);
}
