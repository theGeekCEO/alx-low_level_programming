#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list.
* @h: head of the doubly linked list
* Return: Returns the number of element
*/

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	if (!h)
		return (0);
	do {
		printf("%d\n", h->n);
		len++;
		h = h->next;
	} while (h != NULL);
	return (len);
}
