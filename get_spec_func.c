#include "main.h"
#include <stddef.h>

/**
 * get_spec_func -  check specifier type
 * @s: type
 *
 * Return: pointer to function
 */

char *(*get_spec_func(char s))(va_list)
{
	int x;
	s_types spec_types[] = {
		{"c", _char},
		{"s", _string},
		{"%", _percent},
		{"d", _int},
		{"i", _int},
		{"u", _unsigned},
		{"o", _octal},
		{"r", _rev},
		{"R", _rot13},
		{"b", _binary},
		{"x", _hex},
		{"X", _HEX},
		{"p", _address},
		{NULL, NULL}
	};

	for (x = 0; spec_types[x].spec; x++)
		if (s == *spec_types[x].spec)

			return (spec_types[x].f);

	return (spec_types[x].f);
}
