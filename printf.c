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
	int x, buffend =0;
	va_list valist;
	char *holder;
<<<<<<< HEAD
	char  totalBuffer = 0;
=======
	double totalBuffer = 0;
>>>>>>> bced3b6bbf351de9e568dff2c4e0fc448d0d56a8
	double *total;
	char *(*spec_func)(va_list) = NULL;
	char buffer[BUFSIZE];


	if (format == NULL)
		return (-1);
	va_start(valist, format);
	total = &totalBuffer;
	for (x = 0; x < BUFSIZE; x++)
		buffer[x] = 0;
	for (x = 0; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			x++;
			spec_func = get_spec_func(format[x]);
			holder = (spec_func) ? spec_func(valist) : nothing_found(format[x]);
			if (holder)
				buffend = alloc_buffer(holder, _strlen(holder), buffer, buffend, total);
		}
		else
		{
			buffend = alloc_buffer(holder, 1, buffer, buffend, total);
			holder = chartos(format[x]);
		}
	}

	va_end(valist);
	_puts(buffer, buffend);
	return (totalBuffer + buffend);
}
