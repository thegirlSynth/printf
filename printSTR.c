#include "main.h"
#include <stdlib.h>
/**
* printSRT - handles S
* @list: a va_list macro
* Return: number of bytes printed. 0 otherwise
*/
int printSTR(va_list list)
{
	int i, count = 0, n = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 32 && s[i] < 127)
			n += _putchar(s[i]);
		else
		{
			n += _putchar('\\');
			n += _putchar('x');
			if (s[i] < 16)
			{
				n += _putchar('0');
			}
			n += HEXA((unsigned int)s[i], &count);
		}
	}
	return (n);
}

