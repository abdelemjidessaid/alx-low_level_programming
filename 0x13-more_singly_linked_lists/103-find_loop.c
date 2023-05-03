#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: the pointer to the head's node of a linked list.
 * Return: the pointer to the node that loop starts with, NULL otherwise.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (!head || !(head->next))
		return (NULL);
	second = head->next;
	first = (head->next)->next;
	while (first)
	{
		if (first == second)
		{
			second = head;
			while (second != first)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
		second = second->next;
		first = (first->next)->next;
	}
	return (NULL);
}
