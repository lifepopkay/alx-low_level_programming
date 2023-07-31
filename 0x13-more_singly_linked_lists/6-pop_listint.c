#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data which is stored as temp_node.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *temp;
	int tmp_data;

	ptr = *head;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		tmp = ptr;
		ptr = ptr->next;
		tmp_data = tmp->n;
		free(tmp);
		*head = ptr;
		return (tmp_data);
	}
}
