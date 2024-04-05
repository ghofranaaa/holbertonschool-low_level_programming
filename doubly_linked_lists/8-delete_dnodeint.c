#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;
	unsigned int i;

if (head == NULL || *head == NULL)
{
	return (-1);
}
if (index == 0)
{
	*head = p->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
		free(p);
		return (1);
	}
}
for (i = 0; p != NULL && i < index; i++)
{
	p = p->next;
}
if (p == NULL)
return (-1);

if (p->prev != NULL)
p->prev->next = p->next;
if (p->next != NULL)
p->next->prev = p->prev;

free(p);
return (1);
}

