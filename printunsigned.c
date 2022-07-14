#include "main.h"
/**
 * printunsigned - handle u specifier in printf
 * @list: a va_list macro
 * Return: number of bytes printed
 */
int printunsigned(va_list list)
{
	unsigned int n;
	unsigned int num, div = 1, len = 0;

	n = va_arg(list, unsigned int);
	num = n;
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
		return (len);
}
