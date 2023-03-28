#include "main.h"

int _printf(const char *format, ...)
{
        int index = 0;

        if (format != NULL)
                return (EXIT_FAILURE);
        for (; index != '\0'; index++)
                _putchar (format[index]);
return (EXIT_SUCCESS);
}
