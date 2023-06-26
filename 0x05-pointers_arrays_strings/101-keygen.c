#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78 + '0'; // Generate a random digit (0-9)
		sum += pass[i] - '0'; // Convert the character to its integer value and add to the sum
		putchar(pass[i]); // Print the generated digit

		if ((2772 - sum) < 78)
		{
			n = 2772 - sum; // Calculate the remaining value to reach 2772
			sum += n; // Add the remaining value to the sum
			putchar(n + '0'); // Print the remaining value as a digit
			break;
		}
	}

	putchar('\n'); // Print a newline character

	return (0);
}

