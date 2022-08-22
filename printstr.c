#include "main.h"
/**
 * printstr - prints a string
 * @list: pointer to string to be printed.
 * Return: number of bytes printed.
 */

/* Printing a String */

int printstr(va_list list)
{
	int i, n = 0;

	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		n += _putchar(s[i]);
	}
	return (n);
}


/**
 * printSTR - handles S
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
			n += HEXA(s[i], &count);
		}
	}
	return (n);
}

