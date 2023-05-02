#include "lists.h"

/**
 * print_listint_safe - function that prints all node of a given linkes list
 * with the address of each in node safely.
 * @head: the pointer of the first node of the linked list.
 * [!] if fails, the program will exit with status of 98.
 * Return: number of nodes contained in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *prev = NULL;

	while (current)
	{
		if (prev && prev <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}

		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		prev = current;
		current = current->next;
	}

	return (count);
}
