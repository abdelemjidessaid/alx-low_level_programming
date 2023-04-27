#include "lists.h"

/**
 * list_len - function that calcs the elements of a linked list.
 * @h: header's pointer of the linked list.
 * Return: the number of elemets found.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *p = h;

	while (p)
	{
		len++;
		p = p->next;
	}
	return (len);
}
