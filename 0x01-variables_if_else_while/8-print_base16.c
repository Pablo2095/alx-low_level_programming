#include <stdio.h>
/**
 * main- Enrty point
 * print  all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;
	int s;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
	}
	for (s = 97; s <= 102; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
