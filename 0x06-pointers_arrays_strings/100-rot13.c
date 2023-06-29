#include "main.h"

/**
 * rot13 - encodes a string using ROT13 cipher
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr != '\0')
	{
		int index;

		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				index = *ptr - 'a';
				*ptr = rot13_lower[index];
			}
			else
			{
				index = *ptr - 'A';
				*ptr = rot13_upper[index];
			}
		}

		ptr++;
	}

	return str;
}

