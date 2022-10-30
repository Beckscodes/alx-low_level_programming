#include <stdio.h>

/**
 * main - print alphabet reversed
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);

}

