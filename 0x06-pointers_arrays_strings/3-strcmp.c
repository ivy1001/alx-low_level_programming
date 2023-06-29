#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/* Compare corresponding characters of s1 and s2 */
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	/* Check if s1 and s2 have the same length */
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);

	/* Return the difference in lengths if s1 and s2 differ in length */
	return (s1[i] - s2[i]);
}

