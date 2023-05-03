#include "main.h"

/**
 * print_rev - Print a string, in reverse, followed by a new line
 * @s: String in reverse
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int longi = 0;
	int p;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (p = longi; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
