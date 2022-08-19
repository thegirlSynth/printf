#include "main.h"

/**
 * handle_specifiers -  handles conversion specifiers.
 *
 */

int handle_specifiers()
{
	int i;
	print printype[] = {
		{'c', printchar},
		{'s', printstr},
		{'d', printnum},
		{'i', printnum},
		{'b', printbinary},
		{'x', printhexa},
		{'X', printHEXA},
		{'o', printoctal},
		{'u', printunsigned},
		{'S', printSTR},
		{'p', printSTR}
	};
	for (j = 0; j < 11; j++)
	{
		if (printype[j].t == format[i])
			return (printype[j].f(list));
	}

	return (NULL);
}



/**
* _printf - produces output according to a format
* @format: is a character string
* Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list list;
	int val, j, i = 0, n = 0;

	va_start(list, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			val = printype[j].f(list);
			if (val == -1)
				return (-1);
			n += val;

			if (j == 11)
			{
				if (format[i] != '%')
					n += _putchar('%');
				n += _putchar(format[i]);
			}
		}
		else
			n += _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (n);
}
