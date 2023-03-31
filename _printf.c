#include "main.h"

/**
 * _printf - main function that printf a string and with possibles options
 * @format: format is a string that contain all the test for the function
 *
 * Return: succes
*/

int _printf(const char *format, ...)
{
	int index = 0;
	const char *p;

	va_list list;

	va_start(list, format);

	if (format == NULL)
	return (-1);
	p = format;
	for (; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'c':
					print_c(list);
				break;
				case 's':
					print_s(list);
				break;
				case '%':
					print_pourcent(list);
				break;
				default:
					_putchar ('%');
					_putchar (*p);
				index += 2;
			}
		}
		else
		{
			_putchar(*p);
			index++;
		}
	}
	va_end(list);
	return (index);
}
