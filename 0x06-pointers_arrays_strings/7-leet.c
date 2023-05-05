#include "main.h"

/**
 * leet - Encode a string into 1337
 * @n: Input value
 * Return: n value
 */
char *leet(char *n)
{
	int p, s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0';)
	{
		for (s = 0; s < 10; s++)
		{
			if (p == s1[s])
			{
				n[p] = s2[s];
			}
		}
	}
	return (n);
}
