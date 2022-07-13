#include "main.h"

/**
* printbinary - returns the binary number
* @list: a va_list macro
* Return: the binary number
*/
int printbinary(va_list list)
{
	unsigned int n;
	int count = 0;

	n = va_arg(list, unsigned int);
	binary(n, &count);
	return (count);
}

/**
* binary - returns the binary number
* @n: an unsigned int
* @ptr: a pointer to an int
* Return: the binary number
*/
int binary(unsigned int n, int *ptr)
{
	char c;

	(*ptr)++;
	if (n / 2 > 0)
	{
		binary(n / 2, ptr);
	}
	c = (n % 2) + '0';
	_putchar(c);
	return (*ptr);
}
