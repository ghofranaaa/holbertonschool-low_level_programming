#include "dog.h"
/**
 * *new_dog - creating a new dog.
 * @name: char.
 * @age: float.
 * @owner: char.
 *  Return: 0 or NULL.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i, j;

d = malloc(sizeof(dog_t));
if (d == NULL)
{
	return (NULL);
}
i = _strlen(name);
d->name = malloc(sizeof(char) * (i + 1));
if (d->name == NULL)
{
	free(d);
	return (NULL);
}
j = _strlen(owner);
d->owner = malloc(sizeof(char) * (j + 1));
if (d->owner == NULL)
{
	free(d->name);
	free(d);
	return (NULL);
}
strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);
return (d);
}

