#include <stdio.h>
/**
 * main - Entry point
 * print all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
