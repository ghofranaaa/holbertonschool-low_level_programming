#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - a function that prints the elements of a list.
 * @h: pointer to the head of the list.
 * Description: printing the elements of a list.
 * Return: the number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
	}
			h = h->next;
			count++;
		}
	return (count);
}
