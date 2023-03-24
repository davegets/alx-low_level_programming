#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
* variable number of argument is possible thanks to Variadic Functions
* @va_list args: number of arguments in this question int type
*@va_list start the function begins manupulating variadic operations,@va_end ends the operations
* Return: the values of the string values passed by argment
*/

void print_strings(const char *separator, const unsigned int n, ...)
{ unsigned int i;
va_list args;
va_start(args, n);
if (separator == NULL)
separator = " ";
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char*);
printf("%s", str);
if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
    va_end(args);
}
