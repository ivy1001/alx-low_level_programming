#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	/* Iterate through each character of the string */
	while (*ptr != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/* Convert lowercase letter to uppercase */
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}

