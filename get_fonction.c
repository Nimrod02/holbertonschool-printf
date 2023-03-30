#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_s - fonction print a string
 *@str: sting 
*/

    void print_s(char *str)
    {
        int index = 0;
        for (; index < '\0'; index++)
            _putchar (str[index]);
    }

/**
 *print_c - fonction print char 
 *@character: character
*/

    void print_c(char character)
    {  
        _putchar (character);
    }

    

