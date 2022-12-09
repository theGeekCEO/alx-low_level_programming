#include "lists.h"

/**
* dlistint_len - return number of elements in a linked dlistint_t list.
* @h: head of the doubly linked list
* Return: Returns the number of element
*/

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (!h)
		return (0);
	do {
		len++;
		h = h->next;
	} while (h != NULL);
	return (len);
}
