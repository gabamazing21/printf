#include "main.h"
int _printf(const string format, ...);
/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: length of the output
 */
int _printf(const string format, ...)
{
	/*Define an array of specifier_format struct*/
	specifier_format d[] =  {
		{"c", _print_char}, {"s", _print_str},
		{"%", _print_mod}, {"d", _print_dec},
		{"i", _print_int}, {"b", _print_binary},
		{"u", _print_unsigned}, {"o", _print_oct},
		{"x", _print_hexa}, {"X", _print_HEXA}
	};
	va_list varArg; /*Declare a variable argument list.*/
	int len = 0, i = 0, j;

	va_start(varArg, format);

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			if (format[i + 1] == '\0' &&  format[i] == '%')
				return (-1);
			j = 0;
			while (j < 10)
			{
				if (format[i + 1] == *(d[j].spec))
					break;
				j++;
			}
			if (j < 10)
			{
				len += d[j].func(varArg);
				i += 1;
			}
			else
			{
				_putchar(format[i]);
				len++;
			}
		}
		i++;
	}
	va_end(varArg);
	return (len);
}
