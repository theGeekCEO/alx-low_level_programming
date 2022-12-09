#include "lists.h"

/**
* get_dnodeint_at_index - get nth node a doubly linked list
* @head: the head of the linked list
* @index: index of the node
* Return: Null is not exist or address of the node
*/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *handle;

	if (head == NULL)
		return (NULL);
	handle = head;
	for (i = 0; handle != NULL && i <= index; i++)
	{
		if (i == index)
			return (handle);
		handle = handle->next;
	}
	return (NULL);
}

