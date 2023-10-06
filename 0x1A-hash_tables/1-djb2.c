#include "hash_tables.h"
/**
 * hash_djb2 - implements djb2 algorithm
 * @str: string to be parsed
 * Return: value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int djb2;
	int i;

	djb2 = 5381;
	while ((i = *str++))
	{
		djb2 = ((djb2 << 5) + djb2) + i;
	}
	return (djb2);
}
