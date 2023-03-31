#include "main.h"

/**
 * print_s - fonction print a string
 * @str: char pointer to form a string
*/

int print_s(va_list list)
{
	char *str;
	int index = 0;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (; str[index] != '\0'; index++)
		_putchar (str[index]);
	return (index);
}

/**
 * print_c - fonction print char
 * @character: character
*/

void print_c(va_list list)
{
	_putchar (va_arg(list, int));
}

int print_pourcent(__attribute((unused))va_list list)
{
	_putchar ('%');
	return (1);
}
