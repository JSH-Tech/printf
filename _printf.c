#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 *_printf-function print on a standard output
 *
 *@format: a parameter
 *
 *Return: number of arguments
 */

int _printf(const char *format, ...)
{
va_list list;
int numbOfChar;
va_start(list, format);
numbOfChar = vfprintf(stdout, format, list);
va_end(list);
return (numbOfChar);
}
