#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	while (str[length] != '\0')
		length++;

	start_index = (length + 1) / 2;

	for (i = start_index; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

