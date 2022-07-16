#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
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


