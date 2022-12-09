#include "lists.h"

/**
* free_dlistint -  frees a dlistint_t list.
* @head: The head of the linkedlist
* Return: Address of the new linked list
*/


void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;
	dlistint_t *curr;

	if (head != NULL)
	{
		curr = head;
		while (curr != NULL)
		{
			prev = curr;
			curr = curr->next;
			free(prev);
		}
	}
}

