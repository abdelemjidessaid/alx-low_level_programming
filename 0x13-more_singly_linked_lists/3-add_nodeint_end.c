#include "lists.h"

/**
 * add_nodeint_end - function that adds new node to the end of a liked list.
 * @head: pointer of head node of a linked list.
 * @n: integer data.
 * Return: the pointer of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *cur = *head;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (cur->next)
		cur = cur->next;
	cur->next = node;
	return (node);
}
