#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data of a linked list.
 * @head: pointer of head node of the linked lists.
 * Return: summation of all data of the given linked lists.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	if (!head)
		return (sum);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
