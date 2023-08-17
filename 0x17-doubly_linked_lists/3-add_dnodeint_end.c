#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *@head: head of lists
 *@n: elements value
 *Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h->next = h;
		h->next = new;
	}
	else
	{
		new = *head;
	}
	new->prev = h;

	return (new);
}
