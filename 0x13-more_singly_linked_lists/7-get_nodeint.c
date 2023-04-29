#include "lists.h"

/**
 * get_nodeint_at_index - function that returns a node using index.
 * @head: pointer of the header node.
 * @index: index of the target node.
 * Return: target node, NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (node)
		return (node);
	return (NULL);
}
