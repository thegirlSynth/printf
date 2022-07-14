#include "main.h"
/**
 * printhexa - handle x for hexadecimal numbers
 * @list: a va_list macro
 * Return: number of byted printed
 */
int printhexa(va_list list)
{
	int cout = 0;
	unsigned int n = va_arg(list, unsigned int);

	hexa(n, &cout);
	return (cout);
}

/**
 * hexa - handle x for hexadecimal numbers
 * @n: the number to be converted
 * @len: an unsigned int pointer
 * Return: number of byted printed
 */
int hexa(unsigned int n, int *len)
{
	unsigned int c;

	(*len)++;
	if (n / 16 > 0)
		hexa(n / 16, len);
	c = n % 16;
	if (c > 9 && c < 16)
	{
		c -= 10;
		_putchar(c + 'a');
	}
	else
		_putchar(c + '0');
	return ((*len));
}


