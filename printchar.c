#include "main.h"
/**
* printchar - prints a single char
* @list: a va_list macro
* Return: number of bytes printed. 0 otherwise
*/
int printchar(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

