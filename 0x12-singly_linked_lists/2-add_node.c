#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node to a linked list.
 * @head: a pointer of pointer of the head node.
 * @str: a pointer of the data which is a char string.
 * Return: the head node.
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *node;

	node = (struct list_s *) malloc(sizeof(struct list_s));
	if (node == NULL)
		return (NULL);
	if (str)
		node->len = strlen(str);
	else
		node->len = 0;
	node->str = strdup(str);
	node->next = *head;
	*head = node;

	return (*head);
}
