#include "lists.h"

/**
 * free_listint2 - function that frees memory allocated by a linked lists
 * by setting NULL to the head.
 * @head: pointer of the head node of the linked lists.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
