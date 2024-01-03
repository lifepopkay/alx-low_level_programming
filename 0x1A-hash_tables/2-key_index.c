#include "hash_tables.h"

/**
 * key_index - function gives index of a key
 *
 * @key: the key of the value
 * @size: size the array of the hash table
 *
 * Return: this uses the hash_djb2 
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) * size);
}
