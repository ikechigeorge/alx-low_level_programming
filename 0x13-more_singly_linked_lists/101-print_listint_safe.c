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

	ab = head;
	while (head != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *) ab, ab->n);
		tmp = ab->next;
		if (tmp >= ab)
		{
			printf("-> [%p] %d\n", (void *) tmp, tmp->n);
			break;
		}
		ab = tmp;
	}
	if (ab == NULL)
	{
		return (count);
	}
	ab = ab->next;
	while (ab != NULL && ab < tmp)
	{
		count++;
		printf("[%p] %d\n", (void *) ab, ab->n);
		ab = ab->next;
	}
	exit(98);
}
