#include "lists.h"

/**
 * free_listint - function that frees memory allocated by linked lists.
 * @head: pointer of head node of the linked list.
 * Retur: void.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
