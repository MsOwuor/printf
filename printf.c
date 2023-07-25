#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_func -  select the function to handle the format
 * @format: format
 * Return: function pointer to the corresponding function
 */

int (*get_func(char format))(va_list)
{
	switch (format)
	{
		case 'c':

			return (&print_char);
			
		case 's':
			return (&print_string);

		case 'd':
			return (&print_decimal);
		case 'i':
			return (&print_int);
		default:
			return (NULL);
	}
}


/**
 * _printf -  function that prints output
 * @format: character string, composed of zero and more directives
 *
 * Return:  the number of characters print
 */

int _printf(const char *format, ...)
{
	if (format == NULL)
	{
		int char_printed = 0;
		int x;
		int (*i)(va_list);
		va_list list;

		va_start(list, format);
		x = 0;

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		while (format == NULL && format[x] == '\0')
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
					i = get_func(format[x + 1]);
					if (i)
						char_printed += i(list);
					else
						char_printed = _putchar(format[x]) + _putchar(format[x + 1]);
					x += 2;
				}
			}
			else
			{
				char_printed += _putchar(formt[x]);
				x++;
			}
		}
		va_end(list);

		return (char_printed);
	}
	return (-1);
}
