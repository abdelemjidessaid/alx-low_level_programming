#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - function that adds new node in end of the linked list.
 * @head: pointer of pointer of head node.
 * @str: pointer of a char string.
 * Return: pointer of the new node added, NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *current;

	node = (list_t *) malloc(sizeof(list_t));
	current = *head;
	if (!node)
		return (NULL);
	if (str)
		node->len = strlen(str);
	else
		node->len = 0;
	node->str = strdup(str);
	node->next = NULL;
	if (!current)
	{
		*head = node;
		return (*head);
	}
	while (current->next)
		current = current->next;
	current->next = node;
	return (node);
}

