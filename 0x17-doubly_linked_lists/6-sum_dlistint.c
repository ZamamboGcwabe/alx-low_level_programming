#include "lists.h"

/**
 *sum_dlistint -  returns the sum of all the data of a dlistint_t linked list
 *@head: head of list
 *Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			head = head->next;
			sum += head->n;
		}
	}
	return (sum);
}
