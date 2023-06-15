#include "lists.h"

/**
 * dlistint_len - function that returns the number of node in a given
 * doubly linked list.
 * @h: pointer to the head of the given doubly linked list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head = h;

	while (head)
	{
		if (count > 0 && head == h)
			break;
		head = head->next;
		count++;
	}
	return (count);
}
