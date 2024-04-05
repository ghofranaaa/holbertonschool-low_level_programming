#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index -  function that returns the nth node of a list.
 * @head: the head of the list.
 * @index: the index of the node.
 * Return: the nth node or NULL if it doesn't exist in the list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *p = head;

	while (p != NULL && n < index)
	{
		p = p->next;
		n++;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
