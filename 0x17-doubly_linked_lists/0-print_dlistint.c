#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - a function that prints all the element of the dlistint
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of node in the list
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t k;

	k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}

	return (k);
}
