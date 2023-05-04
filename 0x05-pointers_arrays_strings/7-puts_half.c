#include "main.h"

/**
 * puts_half - Print half of a string
 * if  an odd length, where n = (length_of_the_string - 1) / 2
 * @str: Input
 * Return: half a string
 */
void puts_half(char *str)
{
	int p, n, longi;

	longi = 0;

	for (p = 0; str[p] != '\0'; p++)
		longi++;
	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (p = n; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');
}
