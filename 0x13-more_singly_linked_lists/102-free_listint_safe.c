#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			*h = NULL;
			return (node_count);
		}

		free(temp);
	}

	*h = NULL;
	return (node_count);
}
