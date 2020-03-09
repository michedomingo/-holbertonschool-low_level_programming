#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to character
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcpy - copies the string by src pointer, to buffer by dest pointer
 * @dest: pointer to destination of string to copy
 * @src: pointer to char string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new struct dog
 * @name: pointer to character string
 * @age: float int type
 * @owner: pointer to character string
 * Return: pointer to new struct dog type called dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		return (NULL);
	}
	_strcpy(ptr->name, name);

	ptr->age = age;

	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->owner, owner);

	return (ptr);
}
