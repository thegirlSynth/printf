#include "main.h"
/**
* _printf - produces output according to a format
* @format: is a character string
* Return: the number of characters printed
*/
int _printf(const char* format, ...)
{	
	va_list list;
	int j, i = 0, n = 0;

	print printype[] = {{'c', printchar},
						{'s', printstr}
	};

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 2; j++)
			{
				if (printype[j].t == format[i])
				{
					n += printype[j].f(list);
					break;
				}

			}
		}
		else
			n += _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (n);
}

