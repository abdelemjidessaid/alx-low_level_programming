#include "lists.h"

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
