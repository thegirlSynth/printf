#include "main.h"
/**
 * printhexa - handle x for hexadecimal numbers
 * @list: a va_list macro
 * Return: number of byted printed
 */
int printhexa(va_list list)
{
	int count = 0;
	unsigned long int n = va_arg(list, unsigned long int);

	count += hexa(n);
	return (count);
}

/**
 * hexa - handle x for hexadecimal numbers
 * @n: the number to be converted
 * Return: number of byted printed
 */
int hexa(unsigned long int n)
{
	unsigned int count = 0, c;


	if (n / 16 > 0)
		count += hexa(n / 16);
	c = n % 16;
	if (c > 9 && c < 16)
	{
		c -= 10;
		count += _putchar(c + 'a');
	}
	else
		count += _putchar(c + '0');
	return (count);
}


