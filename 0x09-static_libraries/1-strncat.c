#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int s;


	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
	dest[p] = src[s];
	p++;
	s++;
	}
	dest[p] = '\0';
	return (dest);
}
