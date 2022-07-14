#include "main.h"

/**
 * printoctal - handles octal numbers
 * @list: a va_list macro
 * Return: number of byted printed
 */

int printoctal(va_list list)
{
	unsigned int n;
	int count = 0;

	n = va_arg(list, unsigned int);

	octal(n, &count);
	return (count);
}


/**
 * octal - handles octal numbers
 * @n: the number to be converted
 * @ptr: an unsigned int pointer
 * Return: number of byted printed
 */

int octal(unsigned int n, int *ptr)
{
	char c;

	(*ptr)++;
	if (n / 8 > 0)
	{
		octal(n / 8, ptr);
	}
	c = (n % 8) + '0';
	_putchar(c);

	return (*ptr);
}
