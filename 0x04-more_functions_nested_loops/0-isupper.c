#include "main.h"

/**
 * _isupper -  checks for uppercase character
 * @c: variable
 * Return: 0 Always (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
