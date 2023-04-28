#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: new string to insert
 * Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_copy = strdup(str);

	if (new_node == NULL)
		return (NULL);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
