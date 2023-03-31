// #include "main.h"

// /**
//  * get_op_func - function to select correct operation function
//  * @s: operation given (+, *, -, /, %)
//  *
//  * Return: pointer to correct operation function
//  */

// int (*get_op_func(char *s))
// {
// 	datatype finder[] = {
// 		{'c', print_c},
// 		{'s', print_s},
// 		{NULL, NULL}
// 	};
// 	int index = 0;

// 	while (finder[index].op != NULL)
// 	{
// 		if (*s == *finder[index].c)
// 			return (finder[index].f);
// 		index++;
// 	}
// 	return (NULL);
// } 
