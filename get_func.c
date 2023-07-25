#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_func -  select the function to handle the format
 * @format: format
 * Return: function pointer to the corresponding function
 */

int (*get_func(char format))(va_list)
{
        switch (format)
        {
                case 'c':

                        return (&print_char);

                case 's':
                        return (&print_string);

                case 'd':
                        return (&print_decimal);
                case 'i':
                        return (&print_int);
                default:
                        return (NULL);
        }
}
