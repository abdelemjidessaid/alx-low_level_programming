#include "lists.h"

/**
 *
 *
 *
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
