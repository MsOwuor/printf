#include "main.h"
#include "char.h"

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
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size)

{
	char c = va_arg(list, int);
	char buffer[BUFF_SIZE];

	flags = 0;
	width = 0;
	precision = 0;
	size = 0;
	

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
