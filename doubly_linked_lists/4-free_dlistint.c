#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint -  function that frees a list.
 * @head: the head of the list.
 * Description: traversing the list and freeing its nodes.
 */


void free_dlistint(dlistint_t *head)
{
dlistint_t *p = head;
dlistint_t *next;

while (p != NULL)
{
	next = p->next;
	free(p);
	p = next;
}

}
