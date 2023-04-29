#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at a specified index.
 * @head: pointer of pointer of head node of a given linked list.
 * @index: the position of node that should be deleted.
 * Return: 1 if success, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = *head;
	unsigned int i = 0;

	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current && i <= index)
	{
		if (current && i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}
