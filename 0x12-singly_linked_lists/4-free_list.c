#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free a linked list
 * @head: Pointer to the head of the list
 *
 * Return
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
