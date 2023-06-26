#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
			started = 1;
		}
		else if (started == 1)
		{
			/* We encountered a non-digit character after digits, break the loop */
			break;
		}

		s++;
	}

	return num * sign;
}

