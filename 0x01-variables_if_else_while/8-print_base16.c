#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 16)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar(('a' - 10) + n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}

