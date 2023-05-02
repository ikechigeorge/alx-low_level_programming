#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index.
 * @head: a pointer that points to the head of a list.
 * @index:  the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ab, *previous;
	unsigned int j;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		ab = *head;
		*head = (*head)->next;
		free(ab);
		return (1);
	}

	ab = *head;
	previous = NULL;

	for (j = 0; j < index; j++)
	{
		if (ab == NULL)
		{
			return (-1);
		}
		previous = ab;
		ab = ab->next;
	}
	previous->next = ab->next;
	free(ab);

	return (1);
}
