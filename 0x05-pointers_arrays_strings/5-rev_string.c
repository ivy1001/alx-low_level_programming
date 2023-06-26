#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (i = 0, j = i + (i - 1); i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

