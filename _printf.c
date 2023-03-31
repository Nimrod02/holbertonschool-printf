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
	va_list list;

	va_start(list, format);

	if (format == NULL)
	return (-1);

	for (; format[index] != '\0'; index++)
	{

		if (format[index] == '%')
		{
			index++;

			switch (format[index])
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
			}
		}
		else
		{
			_putchar(format[index]);
		}
	}
	va_end(list);
	return (index);
}
