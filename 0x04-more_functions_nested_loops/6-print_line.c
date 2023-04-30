#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: draw the number of lines
 * Return: Empty
 */

void print_line(int n)

{
	int p;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (p = 0; p < n; p++)
	{
	_puthcar(95);
	}
	_putchar('\n');
	}
}
