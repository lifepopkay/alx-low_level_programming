#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a node at the end of a linked list
 * @head: The character to print
 * @str: string for the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *present;
	list_t *new_node;
	int i;

	current = *head;
	while (present && present->next != NULL)
		present = present->next;

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = NULL;

	if (present)
		present->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
