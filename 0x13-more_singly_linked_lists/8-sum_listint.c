#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list.
 * @head: the head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int result;

	result = 0;
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
