#include "lists.h"
/**
*pop_listint - function that deletes the head node
*of a listint_t linked list, and returns the head
*node’s data (n)
*@head: head of the linked list
*Return: the int value of the head element
*/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *old_head;

	if (*head != NULL)
	{
		old_head = *head;
		*head = old_head->next;
		i = old_head->n;
		free(old_head);
		old_head = NULL;
		return (i);
	}
	return (0);
}
