#include "lists.h"

/**
 * reverse - this function reverses the linked lists.
 * @head: pointer of the head node of the given linked list.
 * Return: the head of the reversed linked list.
 */
listint_t *reverse(listint_t *head)
{
	listint_t *current = head, *prev = NULL;

	if (current->next == NULL)
		return (current);
	prev = current;
	head = current = reverse(current->next);
	while (current)
	{
		if (current->next == NULL)
		{
			prev->next = NULL;
			current->next = prev;
			break;
		}
		current = current->next;
	}
	return (head);
}


/**
 * reverse_listint - function that reverses a linked list.
 * @head: pointer of pointer of head node of a linked list.
 * Return: pointer of the first node of the reversed one.
 */
listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL)
		return (*head);
	if (*head->next == NULL)
		return (*head);
	*head = reverse(*head);
	return (*head);
}
