#include "main.h"

/**
 * _memcpy - Copy the memory area
 * @n: Number of bytes
 * @src: Where the memory is stored
 * @dest: Where the memory is moved to
 * Return: the dest value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int b = n;

	for (; p < b; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
