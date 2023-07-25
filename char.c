#include "main.h"

/**
 * print_char - function that prints a char
 * @types: function that lists arguments
 * @buffer: an array function to handle print
 * @flags:  function to calc all active flags
 * @width: Width
 * @precision: specifes precision
 * @size: specifies  size
 * Return: prints total number of char
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
