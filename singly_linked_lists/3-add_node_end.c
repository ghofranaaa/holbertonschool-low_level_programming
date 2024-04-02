#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  function that adds a new node at the beginning of a list.
 * @head: pointer to the head of the list.
 * @str: string.
 * Description: adding a new node.
 * Return: the address of the new element, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node = *head;
	list_t *new_node = malloc(sizeof(list_t));
	int len = 0;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

if (new_node == NULL)
{
	return (NULL);
}
	while (str[len])
{
		len++;
}
dup_str = strdup(str);
if (dup_str == NULL)
{
	free(new_node);
	return (NULL);
}
new_node->str = dup_str;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
	return (new_node);
}
while (last_node->next != NULL)
{
	last_node = last_node->next;
}
last_node->next = new_node;
return (new_node);
}


