#include "main.h"
/**
* handle_specifier - handles conversion specifiers.
* @c: the character to be checked
* @list: the variable argument list
*
* Return: number of characters printed, -1 otherwise
*/
int handle_specifier(const char c, va_list list)
{
	int j, val = 0;
	print printype[] = { {'c', printchar}, {'s', printstr}, {'d', printnum},
		{'i', printnum}, {'b', printbinary}, {'x', printhexa},
		{'X', printHEXA}, {'o', printoctal}, {'u', printunsigned},
		{'S', printSTR}, {'\0', NULL}};


	for (j = 0; printype[j].t != '\0'; j++)
	{
		if (printype[j].t == c)
		{
			val = printype[j].f(list);
			break;
		}
	}

	return (val);
}
