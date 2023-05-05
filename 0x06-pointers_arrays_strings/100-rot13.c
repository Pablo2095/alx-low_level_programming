#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encode a string using rot13
 * @s: Pointer to string
 * Return: value of *s
 */
char *rot13(char *s)
{
	int p;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[p] == data1[b])
			{
				s[p] = datarot[p];

				break;
			}
		}
	}
	return (s);
}
