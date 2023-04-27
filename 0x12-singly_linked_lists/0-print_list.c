#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a linked list.
 * @h: pointer to the head node.
 * Return: the number of node that is printed.
 */
size_t print_list(const list_t *h)
{
	size_t printed = 0;
	const list_t *ptr = h;
	char *data;
	int len;

	while (ptr)
	{
		printed++;
		data = ptr->str;
		len = ptr->len;
		if (!data)
		{
			data = "(nil)";
			len = 0;
		}
		printf("[%u] %s\n", len, data);
		ptr = ptr->next;
	}
	return (printed);
}
