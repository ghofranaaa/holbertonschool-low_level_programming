#ifndef DOG
#define DOG
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog- description of the dog
 * @name: name of the dog
 * @age: old of the dog
 * @owner: the person that owns the dog
 * Return: 0
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog	dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);


#endif
