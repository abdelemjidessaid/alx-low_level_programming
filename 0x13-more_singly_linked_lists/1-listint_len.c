#include "lists.h"

/**
 * listint_len - function that counts the number of elements of a linked list.
 * @h: pointer of header node of a linked list.
 * Return: the number of elements of the given linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
