#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @str: string to be accessed
 * Return: length of the string
 */
int _strlen(string str)
{
	str = malloc(100);
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * _print_char - print a char to stdout
 * @varArg: variable argument
 * Return: 1
 */
int _print_char(va_list varArg)
{
	char c;

	c = va_arg(varArg, int);
	_putchar(c);
	return (1);
}
/**
 * _print_mod - prints a mod operator to stdout
 * @varArg: variable argument
 * Return: 1
 */
int _print_mod(va_list varArg)
{
	(void)varArg;

	_putchar('%');
	return (1);
}
/**
 * _print_str - prints a strinf to stdout
 * @varArg: variable agrument
 * Return: length of the string
 */
int _print_str(va_list varArg)
{
	string str;
	int i = 0, len;

	str = va_arg(varArg, string);
	if (str == NULL)
		str = "(null)";
	len = _strlen(str);
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	return (len);
}
