#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: a pointer that points to the head of th list.
 *
 * Return: 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ab = head;

	while (ab != NULL)
	{
		sum += ab->n;
		ab = ab->next;
	}

	return (sum);
}
