#include "main.h"


int _printf(const char *format, ...)
{
	int get_func;
	va_list args;

	datatype callfunc[] = { {'c', print_char},
				{'s', print_str},
						};
	va_start (args, format);
	if (format != NULL)
		return (EXIT_FAILURE);
	get_func = printer(args, callfunc, get_func);
	va_end(args);
	return(get_func);
}