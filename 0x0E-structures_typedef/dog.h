#ifndef DOG_H
#define DOG_H

/**
 * struct dog - definition for a struct called dog
 * @name: pointer to character string
 * @age: float int type
 * @owner: pointer to character string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
