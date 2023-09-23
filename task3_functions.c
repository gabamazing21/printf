#include "main.h"
/**
  * _print_unsigned - prints integer values to stdout
  * @varArg: variable argument
  * Return: the len of the printed value
  */
int _print_unsigned(va_list varArg)
{
	unsigned int number;
	int len = 0;

	number = va_arg(varArg, unsigned int);
	len += recursive_print(number, len);
	return (len);
}
/**
  * recursive_print_unsigned_int - recursive funtion to print decimals
  * @num: integer to be printed
  * @len: keeps track of the number pprinted to stdout
  * Return: len og printed value
  */
int recursive_print_unsigned_int(long num, int len)
{
	if (num < 0)
	{
		num = -num;
		len++;
	}
	if (num >= 10)
	{
		len += recursive_print_unsigned_int(num / 10, len);
	}
	_putchar((num % 10) + 48);
	return (++len);
}
/**
  * _print_oct - prints octal number
  * @varArg: variable argumet
  * Return: len of print binary
  */
int _print_oct(va_list varArg)
{
	unsigned int num;
	int octal[32], i, print_oct, len;

	i = 0, len = 0;
	num = va_arg(varArg, unsigned int);

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}
	while (num > 0)
	{
		octal[i] = num % 8;
		num /= 8;
		i++;
	}
	for (print_oct = i - 1; print_oct >= 0; print_oct--, len++)
	{
		_putchar(octal[print_oct] + 48);
	}
	return (len);
}
/**
  * _print_hexa - prints hexadecimal number
  * @varArg: variable argumet
  * Return: len of print binary
  */
int _print_hexa(va_list varArg)
{
	unsigned int num;
	int i, len, hexa[32], print_hex;

	num = va_arg(varArg, unsigned int);
	i = 0, len = 0;

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}
	while (num > 0)
	{
		hexa[i] = num % 16;
		num /= 16;
		i++;
	}
	for (print_hex = i - 1; print_hex >= 0; print_hex--, len++)
	{
		if (hexa[print_hex] > 9)
		{
			_putchar(hexa[print_hex] - 10 + 97);
		}
		else
			_putchar(hexa[print_hex] + 48);
	}

	return (len);
}

/**
  * _print_HEXA - prints hexadecimal number in UPERCASE
  * @varArg: variable argumet
  * Return: len of print binary
  */
int _print_HEXA(va_list varArg)
{
	unsigned int num;
	int i, len, HEXA[32], print_hex;

	num = va_arg(varArg, unsigned int);
	i = 0, len = 0;
	if (num == 0)
	{
		_putchar(48);
		return (1);
	}
	while (num > 0)
	{
		HEXA[i] = num % 16;
		num /= 16;
		i++;
	}
	for (print_hex = i - 1; print_hex >= 0; print_hex--, len++)
	{
		if (HEXA[print_hex] > 9)
		{
			_putchar(HEXA[print_hex] - 10 + 'A');
		}
		else
			_putchar(HEXA[print_hex] + 48);
	}

	return (len);
}
