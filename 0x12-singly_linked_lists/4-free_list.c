#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees memory allocated by a linkes lists.
 * @head: a pointer of head node of a linked list.
 * Return: void.
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->str)
		free(head->str);
	if (head->next)
		free_list(head->next);
	free(head);
}
