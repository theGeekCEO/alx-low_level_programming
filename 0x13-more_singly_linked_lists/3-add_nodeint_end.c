#include "lists.h"

/**
*add_nodeint_end - function that adds a new node at the end
*of a listint_t list.
*@head: pointer the address of the head
*@n: int value of the new node
*Return: Address of the new element
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *t;

	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = new_list;
	return (new_list);
}

