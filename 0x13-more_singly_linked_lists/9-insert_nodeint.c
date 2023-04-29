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
	listint_t *current = *head, *prev = *head, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		if (*head == NULL)
		{
			*head = node;
			return (node);
		}
		node->next = *head;
		*head = node;
		return (node);
	}
	while (current)
	{
		if (i == idx)
		{
			node->next = current;
			prev->next = node;
			return (node);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (!current && idx == i)
	{
		current = node;
		return (node);
	}
	return (NULL);
}
