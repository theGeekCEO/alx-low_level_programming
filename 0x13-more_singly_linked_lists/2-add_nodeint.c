#include "lists.h"

/**
*add_nodeint - function to add a node at
*the beginning of linked list
*@head: the head of the linked lists
*@n: int value of the new node
*Return: The address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head != NULL)
	{
		new_head->next = *head;
		new_head->n = n;
		*head = new_head;
		return (*head);
	}
	return (NULL);
}

