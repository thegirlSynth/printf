#include "main.h"
/**
* printhex - handle x for hexadecimal numbers
* @list: a va_list macro
* Return: number of byted printed
*/
int printhex(va_list list)
{
	unsigned int cout = 0;
	unsigned int n = va_arg(list, unsigned int);
	hex(n, &cout);
	return(cout);
}
/**
* hex - handle x for hexadecimal numbers
* @n: the number to be converted
* @len: an unsigned int pointer
* Return: number of byted printed
*/
int hex(unsigned int n, unsigned int *len)
{
	unsigned int c;

	(*len)++;
	if (n / 16 > 0)
		hex(n / 16, len);
	c = n % 16;
	if (c > 9 && c < 16)
	{
		c -= 10;
		_putchar(c + 'a');
	}
	else
		_putchar(c + '0');
	return((*len));
}


