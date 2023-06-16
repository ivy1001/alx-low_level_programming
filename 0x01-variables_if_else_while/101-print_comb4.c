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
	int h;

	h = 0;
	while (h != 8)
	{
		n = h + 1;
		while (n != 9)
		{
			i = n + 1;
			while (i != 10)
			{
				putchar('0' + h);
				putchar('0' + n);
				putchar('0' + i);
				if (h != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			}
			n++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}

