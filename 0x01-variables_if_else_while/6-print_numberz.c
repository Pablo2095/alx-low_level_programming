#include <stdio.h>
/**
 * main - Entry point
 * print all single digit numbers of base 10 starting from 0.
 * * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar(p + 48);
	}
	putchar('\n');
	return (0);
}
