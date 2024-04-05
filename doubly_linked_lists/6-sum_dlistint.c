#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint -  function that returns the sum of all the
 * data (n) of a linked list.
 * @head: the head of the list.
 * Return: the sum of all the data or 0 if it the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
