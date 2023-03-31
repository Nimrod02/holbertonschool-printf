#ifndef PRINT_H
#define PRINT_H
#include <unistd.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _printf(const char *format, ...);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * struct dt - structure for find the charactere linked to the function
 * @c: letter signifying data type
 * @func: function pointer
 */

typedef struct dt
{
        char c;
        void (*func)(va_list)
} datatype;


#endif
