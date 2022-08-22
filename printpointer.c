#include "main.h"

/**
 * printpointer - prints addresses
 * @list: the va_list.
 * Return: the number of charcters printed.
 */

int printpointer(va_list list)
{
	int count = 0;
	unsigned long int p;
	char *str = "(nil)";

	p = va_arg(list, unsigned long int);
	if (p == 0)
	{
		write(STDOUT_FILENO, str, 5);
		count += 5;
		return (count);
	}

	_putchar('0');
	_putchar('x');
	count += 2;
	count += hexa(p);

	return (count);
}
