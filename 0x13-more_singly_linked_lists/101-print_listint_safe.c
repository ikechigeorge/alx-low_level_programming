#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: a pointer that point to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ab;
	const listint_t *tmp;
	size_t count = 0;

	if (!head)
	{
		exit(98);
	}
	ab = head;
	tmp = head;
	while (ab && tmp && tmp->next)
	{
		ab = ab->next;
		tmp = tmp->next->next;

		if (ab == tmp)
		{
			printf("->[%p] %d\n", (void *) ab, ab->n);
			return (count);
		}
		printf("[%p] %d\n", (void *) ab, ab->n);
		count++;
	}
	printf("[%p] %d\n", (void *) ab, ab->n);
	count++;
	return (count);
}
