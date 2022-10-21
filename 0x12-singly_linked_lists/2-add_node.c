#include "lists.h"

/**
*add_node - function to add new node to the end of a list
*@head: head of the list
*@str: string value of the list
*Return: address of the new element or NULL it it fails
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = strlen(str);
	new_list->next = *head;
	*head = new_list;
	return (*head);

}

