#include "main.h"
/**
 * _strncpy - copies a string to another string
 * @dest: the buffer
 * @src: the string to be copied
 * @n: the number of bytes to include in @dest
 * Return: pointer to the resulting string @dest
 */


char *_strncpy(char *dest, char *src, int n)

{
	int srclen = 0, i = 0;

	char *temp = dest, *start = src;



	while (*src)

	{

		srclen++;

		src++;

	}



	rclen++;



	if (n > srclen)

		n = srclen;



	src = start;



	for (; i < n; i++)

		*dest++ = *src++;



	return (temp);

}
