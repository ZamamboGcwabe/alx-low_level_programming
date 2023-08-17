#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: head of the list
 *@index: index of node starting from 0
 *Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int size = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
