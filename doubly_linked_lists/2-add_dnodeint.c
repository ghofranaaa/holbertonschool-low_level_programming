#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint -  function that adds a new node at the beginning of a list.
 * @head: pointer to the head of the list.
 * @n: data stored in the node.
 * Description: adding a new node.
 * Return: the address of the new element, or NULL if it fails.
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL;

if (head == NULL)
{
	return (NULL);
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = *head;
if (*head != NULL)
{
	(*head)->prev = new_node;
}
*head = new_node;

return (new_node);
}
