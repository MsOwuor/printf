#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _char - char to string
 * @c: is the char
 * Return: the string
 */
char *_char(va_list c)
{
	char string[2];
	char *p;

	p = string;
	string[0] = va_arg(c, int);
	string[1] = '\0';
	return (p);
}

/**
 * _string - string to print
 * @s: is the string
 * Return: "string"
 */
char *_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		return ("(null)");
	return (string);
}

/**
 * _percent - passes a '%' sign
 * Return: percent sign as a character
 */
char *_percent(void)
{
	char *string;

	string = "%";
	return (string);
}

/**
 * _int - integers to character
 * @npoint: integer from va_args
 * Return: pointer to string
 */
char *_int(va_list npoint)
{
	int x;
	int s, res, temp, expo, count;
	char *string;

	x = va_arg(npoint, int);
	count = s = 0;
	expo = 1;
	x >= 0 ? (res = x * -1) : (res = x, count++);
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	string = malloc((count + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	if (x < 0)
		string[x++] = '-';
	while (expo >= 1)
	{
		string[s++] = (((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
	return (string);
}
/**
 * _unsigned- unsigned to char
 * @unsign: int from va_args
 * Return: string's pointer
 */
<<<<<<< HEAD
char _unsigned(va_list unsign)
=======
char *_unsigned(va_list unsign)
>>>>>>> refs/remotes/origin/main
{
	unsigned int x, res, temp, expo, count;
	char *string;

	res = va_arg(unsign, unsigned int);
	count = x = 0;
	expo = 1;
	temp = res;
	while (temp >= 10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	string = malloc((count + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (expo >= 1)
	{
		string[x++] = (((res / expo) % 10) + '0');
		expo /= 10;
	}
	return (string);
}
