#include "lists.h"

/**
 * free_listint - setting of linked lists free
 * @head: To get rid of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
