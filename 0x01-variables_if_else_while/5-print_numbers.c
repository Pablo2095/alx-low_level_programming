#include <stdio.h>
/**
 * main - Entry point
 * print all single digit numbers base 10 from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 0;

	for (p = 0; p <= 9; p++)
	{
		printf("%d", p);
	}
	printf("\n");
	return (0);
}
