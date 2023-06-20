#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char str;
	int i;

	i = 0;
	while (i < 10)
	{
		str = 'a';
		while (str <= 'z')
		{
			_putchar(str);
			str++;
		}
		_putchar('\n');
		i++;
	}

}
