#include "lists.h"

/**
 * add_nodeint - function that adds a node to the beginnig of a linked list.
 * @head: pointer of the head node of a linked list.
 * @n: integer data.
 * Return: the pointer of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node, *current = *head;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!current)
	{
		*head = node;
		return (node);
	}
	node->next = current;
	*head = node;
	return (node);
}
