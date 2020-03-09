#include "dog.h"

/**
 * free_dog - frees instances of struct dog type
 * @d: pointer to struct dog type
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
