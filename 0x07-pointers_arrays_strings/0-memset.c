#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @n: Number of bytes to be changed
 * @s: The start of address to be filled
 * @b: Number of bytes to changed
 * Return: the changed value for the n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
