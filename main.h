#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * struct spec_types - function of specifier
 * @sp: specifier
 * @f: function associated
 */
typedef struct sp_types
{
	char *sp;
	char *(*f)(va_list);
}sp;

int _putchar(char c);
int (*get_spec_func(char s))(va_list);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_decimal(va_list list);
int print_int(va_list list);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

#endif /* MAIN_H */
