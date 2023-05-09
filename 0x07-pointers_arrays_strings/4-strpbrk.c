#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: Input value
 * @accept: Input value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			return (s);
		}
		s++;
	}
	return (0);
}
