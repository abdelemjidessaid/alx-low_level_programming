#include "lists.h"

/**
 * print_listint - function that prints all elements of a linked list.
 * @h: header node of a linked list.
 * Return: the number of nodes exists.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
