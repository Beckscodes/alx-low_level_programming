#include <stdio.h>

/**
 * main - print sum of Fibanocci numbers
 * less than 6000000.
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long e = 1, g = 2, sum = g;

	while (g + e < 6000000)
	{
		g += e;
		if (g % 2 == 0)
		sum += g;
		e = g - e;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
