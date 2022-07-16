#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


/* Printing a String */

int printstr(va_list list)
{
	int i, n = 0;

	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
       	else if (*s == '\0')
		return (-1);
  

	for (i = 0; s[i] != '\0'; i++)
	{
		n += _putchar(s[i]);
	}
	return (n);
}


