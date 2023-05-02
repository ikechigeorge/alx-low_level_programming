#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: a pointer that point the head of a list.
 * @idx: index of the list.
 * @n: value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ab = *head;
	unsigned int j = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ab && j < idx - 1)
	{
		j++;
		ab = ab->next;
	}
	if (!ab)
	{
		free(new);
		return (NULL);
	}
	new->next = ab->next;
	ab->next = new;

	return (new);
}
