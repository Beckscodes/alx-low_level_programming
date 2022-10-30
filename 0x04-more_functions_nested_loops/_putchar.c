#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the charatcer to c
 * @c: The character
 * Return: Success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
