#include "lists.h"

/**
 * pop_listint - function that deletes head node of a linked lists.
 * @head: pointer of a pointer of the head node of the linked lists.
 * Return: data of the node which removed, 0 if NULL.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current = *head, *next;

	if (current == NULL)
		return (0);
	data = current->n;
	next = current->next;
	free(current);
	*head = next;
	return (data);
}
