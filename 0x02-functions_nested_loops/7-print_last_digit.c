#include "main.h"

/**
 * print_last_digit-chech main
 * @r: an integer input
 * Description:Function that prints last digit of a number
 * Return: last digit of a number r
 */
int print_last_digit(int r)
{
	int n;

	if(r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
