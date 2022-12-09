#include "lists.h"

/**
* add_dnodeint_end - add node at the end of a linked list
* @head: of the linked list
* @n: value of the node
* Return: return address of the added node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}

