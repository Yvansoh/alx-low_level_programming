#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index index of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @index: The index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
