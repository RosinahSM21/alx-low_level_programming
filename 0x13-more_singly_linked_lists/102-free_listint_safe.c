#include "lists.h"

/**
 * free_listint_safe - declares a linked list freed
 * @m: pointing to the linked list's fundamental node
 *
 * Return: categories within the freed list, are placed as num
 */
size_t free_listint_safe(listint_t **m)
{
	int diff;
	size_t len = 0;
	listint_t *momentary;

	if (!m || !*m)
		return (0);

	while (*m)
	{
		diff = *m - (*m)->next;
		if (diff > 0)
		{
			momentary = (*m)->next;
			free(*m);
			*m = momentary;
			len++;
		}
		else
		{
			free(*m);
			*m = NULL;
			len++;
			break;
		}
	}

	*m = NULL;

	return (len);
}

