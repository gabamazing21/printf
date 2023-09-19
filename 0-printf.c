#include "main.h"
#include <unistd.h>
int _printf(const string format, ...);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: length of the output
 */
int _printf(const string format, ...)
{
	specifier_format d[] =  {
		{"c", _print_char}, {"s", _print_str},
		{"%", _print_mod}
	};
	va_list varArg;
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
			while (j < 3)
			{
				if (format[i + 1] == *(d[j].spec))
					break;
				j++;
			}
			if (j < 3)
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