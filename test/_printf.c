#include "main.h"

int _printf(const char *format, ...)
{
        int index = 0;
	int (*f)
	va_list list;
	va_start (list, format);

        if (format == NULL)
                return (EXIT_FAILURE);

	while (format[index])
	{
		if (format[index] != '%')
			_putchar (format[index]);		
			if (format[index] == '%' && (format[index] != 'c' || format[index] != 's'))
					_putchar (format[index]);
			
		index++;
	}

	va_end(list);

	return (EXIT_SUCCESS);
}
