#include "main.h"
/**
  * _print_dec - prints integer values to stdout
  * @varArg: variable argument
  * Return: the len of the printed value
  */
int _print_dec(va_list varArg)
{
	int number, len = 0;

	number = va_arg(varArg, int);
	len += recursive_print(number, len);
	return (len);
}
/**
  * recursive_print - recursive funtion to print decimals
  * @num: integer to be printed
  * @len: keeps track of the number pprinted to stdout
  * Return: len og printed value
  */
int recursive_print(long num, int len)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}
	if (num >= 10)
	{
		len = recursive_print(num / 10, len);
	}
	_putchar((num % 10) + 48);
	return (++len);
}

/**
  * _print_int - prints integer values to stdout
  * @varArg: variable argument
  * Return: the len of the printed value
  */
int _print_int(va_list varArg)
{
	int number, len = 0;

	number = va_arg(varArg, int);
	len += recursive_print(number, len);
	return (len);
}
