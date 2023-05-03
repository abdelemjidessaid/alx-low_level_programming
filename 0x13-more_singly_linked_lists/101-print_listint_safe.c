#include "lists.h"

/**
 * get_linked_length - function that count the node of a linked list
 * @head: the pointer of the header node of the linked list.
 * Retrun: the count of the nodes of the linked list.
 */
size_t get_linked_length(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *prev = NULL;

	while (current)
	{
		if (prev)
			if (current >= prev)
				return (++count);
		prev = current;
		current = current->next;
		count++;
	}
	return (count);
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
	const listint_t *current = head, *prev = NULL;

	while (current && i <= count)
	{
		if (prev)
		{
			if (current >= prev)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}
		printf("[%p] %d\n", (void *)current, current->n);
		prev = current;
		current = current->next;
		i++;
	}

	return (count);
}
