#include "main.h"
#include <stdbool.h>
/**
* handle_specifier - handles conversion specifiers.
* @c: the character to be checked
* @list: the variable argument list
*
* Return: number of characters printed, -1 otherwise
*/
int handle_specifier(const char c, va_list list, int *val)
{
	int j;
	print printype[] = { {'c', printchar}, {'s', printstr}, {'d', printnum},
		{'i', printnum}, {'b', printbinary}, {'x', printhexa},
		{'X', printHEXA}, {'o', printoctal}, {'u', printunsigned},
		{'S', printSTR}, {'p', printptr}, {'\0', NULL}};


	for (j = 0; printype[j].t != '\0'; j++)
	{
		if (printype[j].t == c)
		{
			*val = printype[j].f(list);
			return true;
		}
	}

	return false;
}
