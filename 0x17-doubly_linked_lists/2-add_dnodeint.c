#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: the beginning of the list
 * @n: integer the new node will contain
 * Return: NULL if failed
 *	address of the new element if successful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
