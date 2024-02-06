#include "lists.h"

/**
 * check_cycle - checks if a list is circular
 * @list: points to the first node
 * Return: 1 if list is circular or 0 if linear
 */

int check_cycle(listint_t *list)
{
	listint_t *current = list;

	while (current != NULL)
	{
		current = current->next;
		if (current == list)
			return (1);
	}
	return (0);
}
