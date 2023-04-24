#include <stdio.h>
/**
 * main - Entry point
 * print alphabets in lowercase and in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 97;
	int s = 65;

	while (p <= 122)
	{
		putchar(p);
		p++;
	}
	while (s <= 90)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
