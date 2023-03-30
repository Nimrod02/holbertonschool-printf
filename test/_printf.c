#include "main.h"

int _printf(const char *format, ...)
{
        int index = 0;
	// int f;
	va_list list;
	va_start (list, format);

        if (format == NULL)
                return (EXIT_FAILURE);

	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			// TODO: get function from c
			// TODO: execute the previous function
		}
		_putchar (format[index]);
		// if (format[index] != '%')
		// 	_putchar (format[index]);
		index++;
	}

	va_end(list);

	return (EXIT_SUCCESS);
}
