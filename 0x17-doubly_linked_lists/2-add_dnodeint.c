#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: head of the doubly linked list
* @n: value of the new node
* Return: Returns the address of the new head
*/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	temp = *head;
	new->next = temp;
	*head = new;
	return (new);
}

