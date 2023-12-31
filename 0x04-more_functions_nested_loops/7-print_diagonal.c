#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print '\' in diagonal
**/

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		if (n > 1)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
