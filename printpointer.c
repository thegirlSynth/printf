#include "main.h"
int printpointer(va_list list)
{
	int count = 0;
	unsigned long int p;
	char *str = "(nil)";

	p = va_arg(list, unsigned long int);
	if (p == 0)
	{
		write(2, str, 5);
		count += 5;
		return (count);
	}

	_putchar('0');
	_putchar('x');
	count += 2;
	hexa(p, &count);

	return (count);
}
