#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, carry, sum;

	len1 = len2 = carry = 0;

	/* Calculate the length of n1 */
	while (n1[len1] != '\0')
		len1++;

	/* Calculate the length of n2 */
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;

	while (i >= 0 || j >= 0)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		sum %= 10;

		r[k] = sum + '0';

		i--;
		j--;
		k--;
	}

	if (carry > 0 && k >= 0)
		r[k] = carry + '0';
	else if (carry > 0)
		return (0);

	return (r + k + 1);
}

