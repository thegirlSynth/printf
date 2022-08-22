#include "main.h"

/**
 * printHEXA - calls the HEHA function that prints a hexadecimal.
 * @list: string of characters to be printed.
 * Return: the number of bytes printed.
 */

int printHEXA(va_list list)
{
	unsigned long int n;
	int count = 0;

	n = va_arg(list, unsigned long int);
	count += HEXA(n);
	return (count);
}


/**
 * HEXA - returns the hexadecimal number
 * @n: an unsigned int
 * Return: the binary number
 */

int HEXA(unsigned long int n)
{
	int count;
	char num[] = "0123456789ABCDEF";

	count = 0;
	if (n / 16 > 0)
	{
		count += HEXA(n / 16);
	}

	count += _putchar(num[n % 16]);

	return (count);
}
