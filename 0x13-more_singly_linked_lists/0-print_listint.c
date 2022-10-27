#include "lists.h"

/**
*print_listint - function that prints all the elements
*of a listint_t list
*@h: head of the linked list
*Return: Number of nodes in the linked list
*/


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (i);
}
