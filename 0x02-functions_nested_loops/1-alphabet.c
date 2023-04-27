#include "main.h"

/**
 * print_alphabets - print all the lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p;

	for (p = 97; p <= 122; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
	return (0);
}
