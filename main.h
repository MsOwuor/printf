#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE 1024

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
char *rev_string(char *a, int n);
void _puts(char *buffer, int size);
char *(*get_spec_func(char s))(va_list);
char *chartos(char c);
char *nothing_found(char c);
#endif /* MAIN_H */
