#ifndef _PUTCHAR_C_
#define _PUTCHAR_C_

#include <unistd.h>

/**
 * _putchar - prints c to stdout 
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
#endif /* _PUTCHAR_C_ */
