#include "main.h"
#include <stdio.h>

/**
 * _printf -  function that prints output
 * @format: character string, composed of zero and more directives
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int x, char_printed = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if(*format == '%')
		{
			format++;
		}

		if (*format == 'c')
		{
			int x = va_args(list, int);
			_putchar(c);
			char_printed++;
		}
		else if (*format == 's')
		{
			char *s = va_args(list, char *);
			while (*s)
			{
				_putchar(*s);
				char_printed++;
				s++;
			}
		}
		else if (*format == '%')
		{
			_putchar('%');
			char_printed++;
		}
		else 
		{
			_putchar('%');
			_putchar(*format);
			char_printed += 2;
		}
		else
		{
		_putchar(*format);
		char_printed++;
		}
		format++;
	}
	va_end(list);
	return (char_printed);
}
