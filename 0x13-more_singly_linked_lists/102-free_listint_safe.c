#include "lists.h"

/**
 * free_listint_safe - function that
 * @h: the pointer to the head node of the linked list.
 * Return: the count of nodes that freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t count = get_linked_length(*h), i;

	if (count == 0)
	{
		for ( ; h  && *h; count++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;

	return (count);
}
