#include "lists.h"

/**
*delete_nodeint_at_index - function to delete
*node from a linked list at a given index
*@head: the head of the linked list
*@index: index of the node to be removed
*Return: returns 1 if successfull and -1 if failed
*
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *el;
	unsigned int i;

	h = *head;
	if (h == NULL)
		return (-1);
	for (i = 0; i <= index; i++)
	{
		if (index == 0)
		{
			*head = h->next;
			free(h);
			return (1);
		}
		else if (i == index - 1)
		{
			el = h->next;
			if (el == NULL)
				return (-1);
			h->next = el->next;
			free(el);
			return (1);
		}
		h  = h->next;
		if (h == NULL)
			return (-1);
	}
	return (-1);
}
