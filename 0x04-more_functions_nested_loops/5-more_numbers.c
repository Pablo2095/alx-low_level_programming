#include "main.h"

/**
 * more_numbers - Print 10 times the numbers, from 0 to 14
 *
 * Return: 10 times the numbers, from 0 to 14
 */

void more_numbers(void)

{
	int p, s;

	for (p = 0; p < 10; p++)
	{
	for (s = 0; s <= 14; s++)
	{
	if (s > 9)
	{
	_putchar((s / 10) + '0');
	}
	_putchar((s % 10) + '0');
	}
	_putchar('\n');
	}
}
