#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9
 * except for 2 and 4
 * Return: 0 Always (Success)
 */
void print_most_numbers(void);
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}