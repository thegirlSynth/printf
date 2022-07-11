#include "main.h"
/**
* printstr - prints a string
* @list: a va_list macro
* Return: number of bytes printed. 0 otherwise
*/
int printstr(va_list list)
{
	int i, n = 0;
	char* s = va_arg(list, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		n += _putchar(s[i]);
	}
	return (n);
}

