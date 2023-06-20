#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
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
