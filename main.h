#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/**
 * struct spec_types - function of specifier
 * @spec: specifier
 * @f: function associated
 */
typedef struct spec_types
{
	char *spec;
	char *(*f)();
}
s_types;

int _putchar(char c);
char *(*get_spec_func(char s))(va_list);
int _printf(const char *format, ...);
char *char_find(va_list c);
char *string_find(va_list s);
char *percent_find(void);
char *int_find(va_list npoint);
char *unsigned_find(va_list unsign);
int _strlen(char *s);
void _puts(char *buffer, int size);
char *chartos(char c);
char *nothing_found(char c);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int bufferlen);
int alloc_buffer(char *hold, int hlen, char *buffer, int size, double *total);
char *rev_find(va_list s);
char *rot13_find(va_list s);
char *binary_find(va_list n);
char *octal_find(va_list n);
char *hex_find(va_list n);
char *HEX_find(va_list n);
char *address_find(va_list n);
char *rev_string(char *a, int n);
#endif /* MAIN_H */
