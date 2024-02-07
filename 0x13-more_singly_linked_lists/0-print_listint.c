#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint_t list
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ab = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ab = h;
	while (ab != NULL)
	{
		printf("%d\n", ab->n);
		ab = ab->next;
		count++;
	}

	return (count);
}
