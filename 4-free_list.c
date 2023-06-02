#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Sets a linked list free immediatelly
 * @head: Sets a linked list free
 */
void free_list(list_t *head)
{
	list_t* current = head;
    while (current != NULL) {
        list_t* next = current->next;
        free(current);
        current = next;
    }
}
