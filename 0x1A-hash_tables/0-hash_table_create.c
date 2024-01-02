#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL)
	}

	ht->size = size;

	array = malloc(sizeof(hash_node_t* ) * size);

	ht->array = array;

	for (i = 0; i < size; i++)
		ht->array[i] = NULL; /** all spaces are null for now **/

	return (ht);
}

	
	
