#include <stdlib.h>
#include "lists.h"

/**
 * free_list -frees a list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *node_to_free;

	while (head != NULL)
	{
		node_to_free = head;
		head = head->next;
		free(node_to_free->str);
		free(node_to_free);
	}
}
