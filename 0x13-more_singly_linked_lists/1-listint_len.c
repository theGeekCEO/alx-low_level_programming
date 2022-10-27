#include "lists.h"

/**
*listint_len - function to return the number of elements
*in a linked list
*@h: the head of the linked list
*Return: the number of elements
*/


size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}

