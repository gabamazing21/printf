#include "main.h"
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
		{"%", _print_mod}
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
		}
		i++;
	}
	va_end(varArg);
	return (len);
}
