#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint -  function that prints all the elements in a list.
 * @h: pointer to the head of the list.
 * Description: printing the elements in the list.
 * Return: the number of node in the list.
 */


size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *p = h;
int count = 0;

if (h == NULL)
{
	return (0);
}

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
return (count);
}
