#include "lists.h"
/**
*sum_listint - function for calculate the sum of the
*int data of a linked list
*@head: head of the linked list
*
*Return: the sum of the data of the linked list
*/


int sum_listint(listint_t *head)
{
	int sum;
	listint_t *el;

	sum = 0;
	el = head;

	if (el == NULL)
		return (0);
	do {
		sum += el->n;
	} while ((el = el->next) != NULL);
	return (sum);
}

