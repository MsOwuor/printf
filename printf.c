#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _printf -  function that prints output
 * @format: character string, composed of zero and more directives
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int x;
	int buffend = 0;
	double *total;
	char *holder;
	double totalBuffer = 0;
	char buffer[BUFSIZE];
	char *(*spec_func)(va_list) = NULL;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	total = &totalBuffer;

	for (x = 0; x < BUFSIZE; x++)
		buffer[x] = 0;

	for (x = 0; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			x++;
			spec_func = get_spec_func(format[x]);
			holder = (spec_func) ? spec_func(list) : nothing_found(format[x]);
			if (holder)
				buffend = alloc_buffer(holder, _strlen(holder), buffer, buffend, total);
		}
		else
		{
			holder = chartos(format[x]);
			buffend = alloc_buffer(holder, 1, buffer, buffend, total);
		}
	}
	_puts(buffer, buffend);
	va_end(list);

	return (totalBuffer + buffend);
}
