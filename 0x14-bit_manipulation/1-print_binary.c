#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)

{
	int c = 0;
	int bit = sizeof(n) * 8 - 1;


	if (n == 0)
		_putchar('0');


	while (bit >= 0)
	{
		if (n >> bit & 1)
		{
			_putchar('1');
			c++;
		}

		else if (c)
			_putchar('0');
			bit--;
	}
}
