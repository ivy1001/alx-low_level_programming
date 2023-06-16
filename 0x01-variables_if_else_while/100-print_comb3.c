#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	int i;

	n = 0;
	while (n < 9)
	{
		i = n + 1;
		while (i < 10)
		{
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

