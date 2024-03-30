#include <stdio.h>
#include "dog.h"

/**
 * print_dog - initialize a variable of type struct dog.
 * @d: struct
 */

void print_dog(struct dog *d)
{

if (d == NULL)
{
return;
}
if (d->name == NULL)
{
	d->name = ("(nill)");
}
if (d->owner == NULL)
{
	d->owner = ("(nill)");
}
	printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
}
