#include "lists.h"

/**
 * get_linked_length - function that counts the nodes of the looped linked list
 * @head: the pointer to the head node of the linked list.
 * Retrun: if linked list is looped return the count of nodes, 0 otherwise.
 */
size_t get_linked_length(const listint_t *head)
{
	size_t count = 1;
	const listint_t *second, *first;

	if (!head || !(head->next))
		return (0);
	second = head->next;
	first = (head->next)->next;

	while (first)
	{
		if (first == second)
		{
			second = head;
			while (second != first)
			{
				count++;
				second = second->next;
				first = first->next;
			}
			second = second->next;
			while (second != first)
			{
				count++;
				second = second->next;
			}
			return (count);
		}

		second = second->next;
		first = (first->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints all node of a given linkes list
 * with the address of each in node safely.
 * @head: the pointer of the first node of the linked list.
 * Return: number of nodes contained in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = get_linked_length(head), i = 0;

	if (!count)
	{
		for ( ; !head; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for ( ; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
