#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: single letter input
 * Return: 1 for lowercase character, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
