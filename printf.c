#include "main.h"

/**
* _printf - produces output according to a format
* @format: is a character string
* Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, n = 0, val;

	va_start(list, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (handle_specifier(format[i], list, &val))
			{
				if (val < 0)
					return (-1);
				n += val;
			}
			else
			{
				if (format[i] != '%')
				{
					n += _putchar('%');
				}
				n += _putchar(format[i]);
			}
		}
		else
			n += _putchar(format[i]);
	}
	va_end(list);
	return (n);
}
