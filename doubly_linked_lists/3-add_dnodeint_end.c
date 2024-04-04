#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end -  function that adds a new node at the end of a list.
 * @head: pointer to the head of the list.
 * @n: data stored in the node.
 * Description: adding a new node.
 * Return: the address of the new element, or NULL if it fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *p = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new_node;
	new_node->prev = p;

	return (new_node);
}
