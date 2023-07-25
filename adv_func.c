#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _rot13 - function is to encode a string using rot13
 * @s: encodes the string
 * Return:  rot13
 */

char *_rot13(va_list s)
{
	int r, t, temp, len;
	char check[] = "AaZz";
	char ntom[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *arg, *rot;

	arg = va_arg(s, char *);
	if (arg == NULL)
		return (NULL);
	len = _strlen(arg);
	rot = malloc((len + 1) * sizeof(char));
	if (rot == NULL)
		return (NULL);
	for (r = 0; r < len; r++)
		for (t = 0; t < 2; t++)
		{
			if (arg[r] >= check[t] && arg[r] <= check[t + 2])
			{
				temp = (arg[r] - 65 - (t * 32));
				rot[r] = (ntom[temp] + (t * 32));
				break;
			}
			else if (!(arg[r] >= check[t + 1] && arg[r] <= check[t + 3]))
			{
				rot[r] = arg[r];
				break;
			}
		}
	rot[r] = '\0';
	return (rot);
}
/**
 * _rev - prints reverse of a string
 * @s: it inputs the string
 * Return: rev
 */
char *_rev(va_list s)
{
	char *arg, *rev;
	int x, len;

	arg = va_arg(s, char *);
	if (arg == NULL)
		return (NULL);
	len = _strlen(arg);
	rev = malloc((len + 1) * sizeof(char));
	if (rev == NULL)
		return (NULL);
	len--;
	for (x = 0; len >= 0; x++, len--)
		rev[x] = arg[len];
	rev[x] = '\0';
	return (rev);
}

/**
 * _binary - changes string to binary
 * @n: inputs the  string
 * Return: binaryString
 */
char _binary(va_list n)
{
	int x, y;
	int binaryNum[32], arg;
	char *binaryString;

	arg = va_arg(n, int);
	for (x = 0; arg > 0; x++, arg /= 2)
		binaryNum[x] = arg % 2;
	binaryString = malloc(x * sizeof(char));
	if (binaryString == NULL)
		return (NULL);
	for (y = 0, x -= 1; x >= 0; x--, y++)
		binaryString[y] = (binaryNum[x] + '0');
	return (binaryString);
}

/**
 * _octal - changes decimal to octal
 * @n: prints octal
 * Return: string's pointer
 */

char *_octal(va_list n)
{
	unsigned long int pos, temp, result, oct, x;
	char *string;

	oct = va_arg(n, unsigned long int);
	result = x = 0;
	pos = 1;
	while (oct)
	{
		result += (oct % 8) * pos;
		oct /= 8;
		pos *= 10;
		x++;
	}
	temp = x;
	pos /= 10;
	string = malloc(temp * sizeof(char) + 1);
	if (string == NULL)
		return (NULL);
	for (x = 0 ; x < temp; x++)
	{
		string[x] = ((result / pos) % 10) + '0';
		pos /= 10;
	}
	string[x] = '\0';
	return (string);
}
