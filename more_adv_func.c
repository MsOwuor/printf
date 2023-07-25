#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _hex - changes int to hex
 * @n: function for integer
 * Return: hex
 */

char _hex(va_list n)
{
	char *hexaDeciNum;
	unsigned int x, temp, arg, hold, size;

	arg = va_arg(n, unsigned int);

	for (hold = arg, size = 0; hold; hold /= 16)
		size++;
	hexaDeciNum = malloc((size + 1) * sizeof(char));
	if (hexaDeciNum == NULL)
		return (NULL);
	for (x = 0; arg; arg /= 16, x++)
	{
		temp = arg % 16;
		if (temp < 10)
			hexaDeciNum[x] = (temp + '0');
		else
			hexaDeciNum[x] = (temp + 'a' - 10);
	}
	return (rev_string(hexaDeciNum, _strlen(hexaDeciNum)));
}
/**
 * _HEX - changes int to hex
 * @n: function for an integer
 * Return: hex
 */

char *_HEX(va_list n)
{
	char *hexaDeciNum;
	unsigned int x, temp, arg, hold, size;

	arg = va_arg(n, unsigned int);

	for (hold = arg, size = 0; hold; hold /= 16)
		size++;
	hexaDeciNum = malloc((size + 1) * sizeof(char));
	if (hexaDeciNum == NULL)
		return (NULL);
	for (x = 0; arg; arg /= 16, x++)
	{
		temp = arg % 16;
		if (temp < 10)
			hexaDeciNum[x] = (temp + '0');
		else
			hexaDeciNum[x] = (temp + 'A' - 10);
	}
	return (rev_string(hexaDeciNum, _strlen(hexaDeciNum)));
}
/**
 * _address - finds the  address
 * @n: integer
 * Return: the address
 */

char _address(va_list n)
{
	char *address;
	unsigned long int x, temp, arg, hold, size;

	arg = va_arg(n, unsigned long int);

	for (hold = arg, size = 0; hold; hold /= 16)
		size++;
	address = malloc((size + 3) * sizeof(char));
	if (address == NULL)
		return (NULL);
	for (x = 0; arg; arg /= 16, x++)
	{
		temp = arg % 16;
		if (temp < 10)
			address[x] = (temp + '0');
		else
			address[x] = (temp + 'a' - 10);
	}
	address[x++] = 'x';
	address[x] = '0';
	return (rev_string(address, _strlen(address)));
}
