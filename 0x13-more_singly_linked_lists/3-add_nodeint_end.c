#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the head of the listint_t lists.
 * @n: value to store in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ab;
	listint_t *temp;

	ab = malloc(sizeof(listint_t));
	if (ab == NULL)
	{
		return (NULL);
	}
	ab->n = n;
	ab->next = NULL;
	if (*head == NULL)
	{
		*head = ab;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ab;
	}
	return (ab);
}
