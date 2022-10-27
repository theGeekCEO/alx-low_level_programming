#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
*free_listint - function that frees linked list
*@head: the head of the linked list
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
