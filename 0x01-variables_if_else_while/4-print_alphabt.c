#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 *
 * Return: Always (Success)
 */

int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d != 'l' && d != 'z')
		{
			putchar(d);
		}
	}
	putchar('\n');

	return (0);
}

