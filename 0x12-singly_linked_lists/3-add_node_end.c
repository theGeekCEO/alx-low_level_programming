#include "lists.h"

/**
*add_node_end - function that adds a new node at the end
*of a list_t list.
*@head: pointer the address of the head
*@str: string value of the new node
*Return: Address of the new element
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *t;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = strlen(str);
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

