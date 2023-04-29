#include "lists.h"

/**
 * insert_nodeint_at_index - function that adds new node in a specific index.
 * @head: pointer of pointer of head node of a linked lists.
 * @idx: index of the position.
 * @n: integer data.
 * Return: new node, NULL if faild.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (current->next)
	{
		if (i + 1 == idx)
		{
			node->next = current->next;
			current->next = node;
			break;
		}
		current = current->next;
		i++;
	}
	if (i + 1 < idx)
		return (NULL);
	return (node);
}
