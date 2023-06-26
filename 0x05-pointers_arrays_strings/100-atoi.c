#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int c;
    int sign;
    int result;

    c = 0;
    sign = 1;
    result = 0;

    while (s[c] == ' ')
        c++;

    if (s[c] == '-' || s[c] == '+')
    {
        if (s[c] == '-')
            sign = -1;
        c++;
    }

    while (s[c] >= '0' && s[c] <= '9')
    {
        result = (result * 10) + (s[c] - '0');
        c++;
    }

    return result * sign;
}

