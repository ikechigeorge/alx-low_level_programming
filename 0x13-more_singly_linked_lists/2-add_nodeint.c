#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to the listint_t list.
 * @n: integer tto be added to the lists_t list.
 *
 * Return:  the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *j;

	if (head == NULL)
	{
		return (NULL);
	}

	j = malloc(sizeof(listint_t));
	if (j == NULL)
	{
		return (NULL);
	}
	j->n = n;
	j->next = *head;
	*head = j;

	return (j);
}
