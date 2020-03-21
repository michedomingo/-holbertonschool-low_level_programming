#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to head of list_t struct
 * @str: pointer to string to duplicate
 * Return: address of new element, otherwise null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int count;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	count = 0;
	while (str[count] != '\0')
		count++;

	newNode->len = count;
	newNode->str = strdup(str);
	newNode->next = *head;

	*head = newNode;
	return (*head);
}
