#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	long long int fibonacci[98];

	fibonacci[0] = 1;

	fibonacci[1] = 2;

	printf("%lld, %lld, ", fibonacci[0], fibonacci[1]);



	for (i = 2; i < 98; i++)

	{

		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		if (i == 98)
			printf("%lld\n", fibonacci[i]);

		else
			printf("%lld, ", fibonacci[i]);

	}



	return (0);
}

