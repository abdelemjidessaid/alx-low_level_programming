#include "lists.h"

/**
 * free_listint2 - function that frees memory allocated by a linked lists
 * by setting NULL to the head.
 * @head: pointer of the head node of the linked lists.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
