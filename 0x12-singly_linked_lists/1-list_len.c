#include "lists.h"

/**
*list_len- function that returns the number of elements
*linked list
*@h: pointer to the head of list
*Return: number of the elements
*/


size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

