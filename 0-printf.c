#include "main.h"
/**
 * _printf - print to standard output according to a format specify
 * format - format can be c, s, %
 *
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	const char formater;
	int i,va;

	va_start(ptr, format);
	if (format == NULL)
		return (NULL);
	for (i = 0; *format != '\0'; i++)
	{
		if ( *format == 'c')
		{
			val = va_arg(ptr, char);
			_putchar(val);

		}
		else if ( *format == 's')
		{
			val = va_arg(ptr, char);
		}
		else if (*format == '%')
		{
			val = va_arg(ptr, char);
		}
	}
	_putchar('\n');
}
