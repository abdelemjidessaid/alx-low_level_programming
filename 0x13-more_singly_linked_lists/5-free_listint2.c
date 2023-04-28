#include "lists.h"

/**
 * free_listint2 - function that frees memory allocated by a linked lists
 * by setting NULL to the head.
 * @head: pointer of the head node of the linked lists.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head, *last;

	if (*head == NULL)
		return;
	while (node->next)
	{
		last = node;
		node = node->next;
		free(last);
	}
	free(node);
	*head = NULL;
}
