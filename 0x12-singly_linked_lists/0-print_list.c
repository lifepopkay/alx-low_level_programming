#include "lists.h"


/**
 * print_list - prints all the
 * element of a list
 * @h: singly linked list used
 *
 * Return: number of element in the list
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
