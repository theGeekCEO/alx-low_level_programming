#include "lists.h"
/**
*reverse_listint - Function that reverses a linked list
*@head: the head of the list
*Return: address of the new head
*/


listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *h;

	h = *head;
	if (h == NULL)
		return (NULL);
	p = NULL;
	while (h != NULL)
	{
		h = h->next;
		(*head)->next  = p;
		p = *head;
		*head = h;
	}
	*head = p;
	return (*head);
}

