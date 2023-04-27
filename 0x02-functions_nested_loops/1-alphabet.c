#include "main.h"

/**
 * print_alphabet - print all lowercase alphabets.
 */
void print_alphabet(void)
{
	char p;

	for (p = 97; p <= 122; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
