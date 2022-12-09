
bomanaps
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x17-doubly_linked_lists/0-print_dlistint.c
@bomanaps
bomanaps task commit
 1 contributor
24 lines (20 sloc)  382 Bytes
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print elements of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
