#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int (*array_function(char *s))(char)

{
op_t spf[] = {
	{'c', print_c},
	{'s', print_s},
	{NULL, NULL}
	};
	int i = 0;

	while (spf[i].op != NULL)
	{
		if (*s == *spf[i].op)
			return (spf[i].f);
		i++;
	}
	return (NULL);
}