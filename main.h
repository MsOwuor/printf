#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

#include <stdio.h>
#include <stdarg.>
#include <stddef.h>

/**
 * struct spec_types -  struct to get function of specifier
 * @spec: specifier
 * @f: function
 */

typedef struct spec_types
{
	char *spec;
	char *(*f)();
}s_types;

int _printf(const char *format, ...);
int _putchar(char c);
char *(*get_spec_func(char s))(va_list);
char *_rot13(va_list s);
char *_binary(va_list n);
char *_octal(va_list n);
char *_hex(va_list n);
char *_HEX(va_list n);
char *_address(va_list n);
char *rev_string(char *a, int n);
char *_char(va_list c);
char *_string(va_list s);
char *_percent(void);
char *_int(va_list npoint);
char *_unsigned(va_list unsign);
int _strlen(char *s);
void _puts(char *buffer, int size);
char *chartos(char c);
char *nothing_found(char c);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int alloc_buffer(char *hold, int hlen, char *buffer, int size, double *total);
char *_rev(va_list s);

#endif /* MAIN_H */

