#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int d, i;

	for (d = '0'; d <= '9'; d++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (d < 1)
			{
				putchar(d);
				putchar(i);

				if (d != '8' || (d == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
