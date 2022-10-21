#include "lists.h"

/**
*free_list - function that frees a list
*@head: pointer the address of the head
*Return: void
*/

void free_list(list_t *head)
{
	list_t *t;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t->str);
		free(t);
	}
}

