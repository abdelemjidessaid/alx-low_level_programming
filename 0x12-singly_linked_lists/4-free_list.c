#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees memory allocated by a linkes lists.
 * @head: a pointer of head node of a linked list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	if (current->str)
		free(current->str);
	if (current->next)
		free_list(current->next);
	free(current);
}
