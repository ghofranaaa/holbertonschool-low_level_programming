#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len -  function that returns the number of elements in a list.
 * @h: pointer to the head of the list.
 * Description: returning the num of the elements of a list.
 * Return: the number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *p = h;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);
}
