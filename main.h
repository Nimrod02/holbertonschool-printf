#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c);
void print_s(va_list list);
void print_c(va_list list);



/**
 * struct dt - structure for find the charactere linked to the function
 * @c: letter signifying data type
 * @func: function pointer
 */

typedef struct dt
{
        char c;
        void (*func)(va_list);
} datatype;


#endif
