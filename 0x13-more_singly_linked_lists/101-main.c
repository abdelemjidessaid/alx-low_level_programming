#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    /*listint_t *node;*/
    size_t count;

/*
    printf("----------------------------\n");
    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    */
    printf("----------------------------\n");
    head2 = NULL;
    add_nodeint(&head, 1);
    count = print_listint_safe(head2);
    printf("count : %lu\n", count);
    head = NULL;
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 5);
    add_nodeint(&head, 6);
    add_nodeint(&head, 7);
    add_nodeint(&head, 8);
    add_nodeint(&head, 9);
    add_nodeint(&head, 10);
    add_nodeint(&head, 11);
    add_nodeint(&head, 12);
    count = print_listint_safe(head);
    printf("count : %lu\n", count);
    printf("----------------------------\n");
    return (0);
}
