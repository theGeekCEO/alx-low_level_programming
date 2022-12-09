#include "lists.h"

/**
* sum_dlistint - return the sum of doubly linked list
* @head: the head of the linked list
* Return: the sum of the list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	do {
		sum += temp->n;
		temp = temp->next;
	} while (temp != NULL);
	return (sum);
}
