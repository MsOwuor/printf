#include "main.h"
#include <stddef.h>
#include <stdio.h>


/**
 * _printf - prints an output
 * @format: format
 * Return: prints the number of characters
 */

int _printf(const char *format, ...)
{
	int i, buffend =0;
	va_list valist;
	double *holder;
	double totalBuffer = 0;
	double *total;
	char *(*spec_func)(va_list) = NULL;
	char buffer[BUFSIZE];


	if (!format)
		return (-1);
	va_start(valist, format);
	total = &totalBuffer;
	for (i = 0; i < BUFSIZE; i++)
		buffer[i] = 0;
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			spec_func = get_spec_func(format[i]);
			holder = (spec_func) ? spec_func(valist) : nothing_found(format[i]);
			if (holder)
				buffend = alloc_buffer(holder, _strlen(holder), buffer, buffend, total);
		}
		else
		{
			buffend = alloc_buffer(holder, 1, buffer, buffend, total);
			holder = chartos(format[i]);
		}
	}

	va_end(valist);
	_puts(buffer, buffend);
	return (totalBuffer + buffend);
}
