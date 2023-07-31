#include "list.h"

/**
 * add_nodeint_end - add a new node at end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *prt;

	node = malloc(sizeof(listint_t));

	prt = *head;
	node->n = n;
	node->next = NULL;

	if (prt == NULL)
	{
		*head = node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}
	return (*head);
}
