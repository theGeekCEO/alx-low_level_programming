#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
*struct list_t - A struct for linked list
*@str: value of the node
*@len: length of the string
*@next: pointer to the next node
*/
typedef struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
