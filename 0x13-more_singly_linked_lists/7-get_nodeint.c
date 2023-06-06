#include "lists.h"

/**
 * get_nodeint_at_index - extracts the node within linked list in precise index
 * @head: preliminary node within a linked list
 * @index: The node’s returning index
 *
 * Return: pointer onto the specified node, alternative NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *temporary = head;

	while (temporary && r < index)
	{
		temporary = temporary->next;
		r++;
	}

	return (temporary ? temporary : NULL);
}
