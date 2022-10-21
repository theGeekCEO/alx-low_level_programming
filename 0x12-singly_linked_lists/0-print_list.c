#include "lists.h"

/**
*print_list - function that prints all the elements of a list_t list
*@h: pointer to the head of list
*Return: length of the elements
*/


size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%lu] %s\n",  h->len, h->str ? h->str : "(nil)");
		i++;
		h = h->next;
	}
	return (i);
}

