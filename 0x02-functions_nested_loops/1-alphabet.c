#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char str;

	str = 'a';
	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}

