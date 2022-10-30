#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}

	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}

	putchar('\n');

	return(0);
}

