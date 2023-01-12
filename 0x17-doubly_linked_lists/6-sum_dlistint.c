#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a list
 * @head: pointer to list
 * Return: Sum of all the data in a list
 *	or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
