#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - figuring out a certain number of various nodes
 * in a linked list int_t the is iteration.
 * @head: A pointer to the listint_t's head during verifying.
 *
 * Return: -0 indicates this list has not been wrapped.
 * Otherwise - The quantity of various nodes that are included in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *monkey, *hen;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	monkey = head->next;
	hen = (head->next)->next;

	while (hen)
	{
		if (monkey == hen)
		{
			monkey = head;
			while (monkey != hen)
			{
				nodes++;
				monkey = monkey->next;
				hen = hen->next;
			}

			monkey = monkey->next;
			while (monkey != hen)
			{
				nodes++;
				monkey = monkey->next;
			}

			return (nodes);
		}

		monkey = monkey->next;
		hen = (hen->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - safeguard printing for a listint_t list.
 * @head: An instrument that points toward the listint_t list's head.
 *
 * Return: nodes in the list, by variety success.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
