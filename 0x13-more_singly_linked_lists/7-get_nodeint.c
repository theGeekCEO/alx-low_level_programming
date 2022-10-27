#include "lists.h"
/**
*get_nodeint_at_index - function that returns the
*nth ndoe of linked list
*@head: the head of the linked list
*@index: index of the element
*Return: the nth node of the linked list
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		if (temp == NULL)
		{
			return (temp);
		}
	}
	return (temp);
}

