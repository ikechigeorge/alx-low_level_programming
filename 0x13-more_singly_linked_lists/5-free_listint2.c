#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer that points to the head of a listint_t.
 */
void free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		listint_t *ab = *head;
		*head = (*head)->next;
		free(ab);
	}
	*head = NULL;
}
