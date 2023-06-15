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
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
