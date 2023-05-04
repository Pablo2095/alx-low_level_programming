#include "main.h"

/**
 * puts2 - Print  every other character of a string
 * @str: The string to input
 * Return: void
 */
void puts2(char *str)
{
	int longi = 0;
	int s = 0;
	char *b = str;
	int m;

	while (*b != '\0')
	{
		b++;
		longi++;
	}
	s = longi - 1;
	for (m = 0; m <= s; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}
