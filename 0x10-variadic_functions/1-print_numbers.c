#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
* variable number of argument is possible thanks to Variadic Functions
* @va_list args: number of arguments in this question int type
*@va_list start the function begins manupulating variadic operations,@va_end ends the operations
* Return: the values of the int values passed by argment
*/

void print_numbers(char *p, int count, ...)
{
int i;
va_list args;
va_start(args, count);
if (p == NULL)
p = " ";
for (i = 0; i < count; i++)
{
int num = va_arg(args, int);
printf("%d", num);
if (i < count - 1)
{
printf("%s", p);
}

}
printf("\n");
va_end(args);
}

