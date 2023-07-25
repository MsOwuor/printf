#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - prints the function printf
 * @args: args
 * Return: Prints char
 */

int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);

int (*get_func(char format))(va_list);

int _printf(const char *format, ...)
{
	int char_printed = 0;
	int x;
	int (*i)(va_list);
	va_list list;

	if (format == NULL)
        return (-1);

	va_start(list, format);
	x = 0;

	while (format[x] != '\0')
	{
	if (format[x] == '%')
	{
	if (format[x + 1] == '%')
	{
	char_printed += _putchar(format[x]);
	x += 2;
	}
	else
	{
	i = get_func(format[x]);
	if (i)
	char_printed += i(list);
	else
	char_printed += _putchar(format[x]) + _putchar(format[x + 1]);
	x += 2;
	}
	}
	else
	{
	char_printed += _putchar(format[x]);
	x++;
	}
	}
	va_end(list);

	return (char_printed);
}
