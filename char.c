#include "main.h"

/**
 * print_char - function that prints a char
 * @list: va_list containing arguments
 * @buffer: an array function to handle print
 * @flags:  function to calc all active flags
 * @width: Width
 * @precision: specifes precision
 * @size: specifies  size
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
