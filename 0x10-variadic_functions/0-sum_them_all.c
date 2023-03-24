#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
* variable number of argument is possible thanks to Variadic Functions
* @va_list args: number of arguments in this question int type
*@va_list start the function begins manupulating variadic operations,@va_end ends the operations
* Return: a sum of the int values passed by argment
*/


int sum_them_all(const unsigned int n, ...)
{unsigned int i = 0, sum = 0;

va_list args;
va_start (args, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);
return (sum);
}
