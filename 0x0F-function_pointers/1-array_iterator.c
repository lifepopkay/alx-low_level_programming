#include "function_pointers.h"

/**
 * array_iterator - iterate throught an array
 * @array: target array
 * @size: array size
 * @action: function pointer
 *
 * Return : Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
