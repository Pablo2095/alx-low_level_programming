#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase.
 *return: void
 */
void print_alphabet_x10(void)

{
	 char p;
	 int s = 0;

	while (s <= 9)
	{
	for (p = 'a'; p <= 'z'; p++)
	{
	_putchar(p);
	}
	_putchar('\n');
	s++;
	}
}
