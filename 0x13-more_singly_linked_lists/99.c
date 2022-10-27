#include "lists.h"

/**
*insert_nodeint_at_index - function that inserts a new
*node at a given position.
*@head: the head of the linked list
*@idx: index of the new element
*@n: int data of the new element
*Return: the address of the new element
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_el, *temp_el;
	unsigned int i = 0;

	temp_el = *head;
	new_el = malloc(sizeof(listint_t));
	if (new_el == NULL)
		return (NULL);
	new_el->n = n;
	if (temp_el == NULL)
	{
		if(idx == 0)
		{
			*head = new_el;
			return (new_el);
		}
		else
		{
			return (NULL);
		}
	}
	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_el->next = temp_el->next;
			temp_el->next = new_el;
			break;
		}
		temp_el = temp_el->next;
		if (temp_el == NULL &&  i + 1 != idx)
			return (NULL);
	}
	return (new_el);
}

