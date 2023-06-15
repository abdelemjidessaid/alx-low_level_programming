#include "lists.h"

/**
 * insert_dnodeint_at_index - unction that inserts a new node
 * at a given position.
 * @h: pointer of pointer to the head of the doubly linked list.
 * @idx: the index that should the new node being in.
 * @n: data of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *cur, *prev = NULL, *next = NULL;

	if (h == NULL)
		return (NULL);

	cur = *h;
	while (cur)
	{
		if (count == idx)
			break;
		prev = cur;
		cur = cur->next;
		count++;
	}
	if (count == idx)
	{
		if (cur)
		{
			next = cur;
			cur = add_dnodeint(&cur, n);
			if (prev)
				prev->next = cur;
			else
				*h = cur;
			cur->prev = prev;
			cur->next = next;
			if (next)
				next->prev = cur;
		}
		else
		{
			if (prev)
				cur = add_dnodeint_end(&prev, n);
			else
			{
				cur = malloc(sizeof(dlistint_t *));
				cur->n = n;
				cur->next = NULL;
				cur->prev = NULL;
			}
		}
		return (cur);
	}

	return (NULL);
}
