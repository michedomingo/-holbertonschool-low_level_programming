#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	if (!size)
		return (NULL);

	newTable = malloc(sizeof(hash_table_t));
	if (!newTable)
		return (NULL);

	newTable->size = size;
	newTable->array = calloc(size, sizeof(hash_node_t *));
	if (!newTable->array)
		return (NULL);

	return (newTable);
}
