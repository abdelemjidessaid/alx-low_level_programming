#include "lists.h"

/**
 * add_dnodeint - function that adds new node at the beginning of
 * the doubly linked list.
 * @head: pointer of pointer to the head of a doubly linked list.
 * @n: data of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*head)
	{
		node->next = *head;
		(*head)->prev = node;
	}
	*head = node;
	return (*head);
}