#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list -  function that frees a list.
 * @head: the head of the list.
 * Description: traversing the list and freeing its nodes.
 */

void free_list(list_t *head)
{
	list_t *p = head;
	list_t *next;

	while (p != NULL)
	{
		next = p->next;
		free(p->str);
		free(p);
		p = next;
	}

}
