#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: a pointer that points to the head of the list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *ab;

	while (*head != NULL)
	{
		ab = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = ab;
	}
	*head = prev;

	return (*head);
}
