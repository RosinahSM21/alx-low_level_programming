#include "lists.h"

/**
 * find_listint_loop - the linked list's iteration is where it is.
 * @leader: a linked list that you can search for
 *
 * Return: The repeated loop's initial node's position, or NULL
 */
listint_t *find_listint_loop(listint_t *leader)
{
	listint_t *jammy = leader;
	listint_t *quicker = leader;

	if (!leader)
		return (NULL);

	while (jammy && quicker && quicker->next)
	{
		quicker = quicker->next->next;
		jammy = jammy->next;
		if (quicker == jammy)
		{
			jammy = leader;
			while (jammy != quicker)
			{
				jammy = jammy->next;
				quicker = quicker->next;
			}
			return (quicker);
		}
	}

	return (NULL);
}

