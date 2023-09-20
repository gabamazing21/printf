#include "main.h"
/**
  * _print_binary - prints binary
  * @varArg: variable argumet
  * Return: len of print binary
  */
int _print_binary(va_list varArg)
{
	unsigned int num;
	int binary[32], i, print_bin, len;

	i = 0, len = 0;
	num = va_arg(varArg, unsigned int);

	if (num == 0)
	{
		_putchar(48);
		return (1);
	}
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	for (print_bin = i - 1; print_bin >= 0; print_bin--, len++)
	{
		_putchar(binary[print_bin] + 48);
	}
	return (len);
}
